/**
 * @file grammar for BTEQ/SQL
 * @author aamayam <alan.amayamtz@gmail.com>
 * @license MIT
 */

module.exports = grammar({
  name: 'bteq',

  externals: $ => [
    $._newline,
    $.comment,
  ],

  extras: $ => [
    /\s/,
    $.comment,
  ],

  conflicts: $ => [
    [$._expression, $.identifier],
    [$.table_reference, $.identifier],
    [$.bteq_statement, $.simple_command],
    [$.if_statement, $.simple_command],
    [$.if_statement, $.if_statement],  // Para IFs anidados
    [$.if_statement, $._else_clause],  // Para el manejo de ELSE
  ],


  precedences: $ => [
    ['else_prec'],           // En lugar de 1
    ['if_then_prec'],        // En lugar de 2
    ['if_then_else_prec'],   // En lugar de 3
    ['statement', 'right'],  // Este está bien porque usa 'right'
    [
      'binary_times',
      'binary_plus',
      'binary_compare',
      'logical_and',
      'logical_or',
    ],
    ['unary', 'binary'],
    ['command', 'statement'],
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.bteq_statement,
        $.sql_statement,
        $.comment,
      )
    ),

    // Separamos los comandos BTEQ en statements y comandos internos
    bteq_statement: $ => prec.right('statement', seq(
      '.',
      choice(
          $.simple_command,
          $.if_statement
      ),
      optional(';')
    )),

    // Comandos simples que no contienen otros comandos
    simple_command: $ => choice(
      $.logon_command,
      $.quit_command,
      $.database_command,
    ),

    // Comando IF como statement separado
    if_statement: $ => choice(
      // IF-THEN sin ELSE
      prec.right('if_then_prec', seq(
          'if',
          $._condition,
          'then',
          $.bteq_statement
      )),
      // IF-THEN-ELSE completo
      prec.right('if_then_else_prec', seq(
          'if',
          $._condition,
          'then',
          $.bteq_statement,
          $._else_clause
      ))
    ),
    
    _else_clause: $ => prec('else_prec', seq(
        'else',
        $.bteq_statement
    )),

    logon_command: $ => seq(
      'logon',
      $._command_argument
    ),

    quit_command: $ => seq(
      'quit',
      optional($._command_argument)
    ),

    database_command: $ => seq(
      'database',
      $._command_argument
    ),

    _command_argument: $ => choice(
      $.shell_variable,
      $._literal,
      $.identifier
    ),

    _condition: $ => choice(
      $.comparison_expression,
      $.identifier,
      $.system_variable
    ),

    system_variable: $ => 'ACTIVITYCOUNT',

    shell_variable: $ => seq(
      '${',
      $.identifier,
      '}'
    ),

    sql_statement: $ => seq(
      choice(
        $.select_statement,
        // Aquí se pueden agregar otros tipos de statements SQL
      ),
      optional(';')
    ),

    select_statement: $ => seq(
      'select',
      $.select_elements,
      'from',
      $.table_reference,
      optional($.group_by_clause),
      optional($.having_clause)
    ),

    select_elements: $ => commaSep1(
      choice(
        $.star,
        $.column_reference,
        $.alias_expression
      )
    ),

    star: $ => '*',

    column_reference: $ => choice(
      $.identifier,
      seq($.table_reference, '.', $.identifier)
    ),

    table_reference: $ => choice(
      $.identifier,
      seq($.shell_variable, '.', $.identifier)
    ),

    alias_expression: $ => seq(
      $._expression,
      'as',
      $.identifier
    ),

    group_by_clause: $ => seq(
      'group',
      'by',
      commaSep1($._expression)
    ),

    having_clause: $ => seq(
      'having',
      $._expression
    ),

    _expression: $ => choice(
      $._literal,
      $.identifier,
      $.comparison_expression,
      $.function_call,
      $.date_expression
    ),

    comparison_expression: $ => prec.left('binary_compare', seq(
      field('left', $._expression),
      field('operator', choice('<', '>', '=', '<=', '>=', '<>')),
      field('right', $._expression)
    )),

    function_call: $ => seq(
      $.identifier,
      '(',
      optional(commaSep1($._expression)),
      ')'
    ),

    date_expression: $ => seq(
      'date',
      optional(seq(
        $._literal,
        optional(seq(
          'format',
          $._literal
        ))
      ))
    ),

    _literal: $ => choice(
      $.number,
      $.string
    ),

    number: $ => /-?\d+/,
    
    string: $ => /'[^']*'/,
    
    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: $ => token(seq('//', /.*/)),
  }
});

// Helpers
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
