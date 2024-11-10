#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  anon_sym_SEMI = 2,
  anon_sym_if = 3,
  anon_sym_then = 4,
  anon_sym_else = 5,
  anon_sym_logon = 6,
  anon_sym_quit = 7,
  anon_sym_database = 8,
  sym_system_variable = 9,
  anon_sym_DOLLAR_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_select = 12,
  anon_sym_from = 13,
  anon_sym_COMMA = 14,
  sym_star = 15,
  anon_sym_as = 16,
  anon_sym_group = 17,
  anon_sym_by = 18,
  anon_sym_having = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  anon_sym_EQ = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_LT_GT = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_date = 28,
  anon_sym_format = 29,
  sym_number = 30,
  sym_string = 31,
  sym_identifier = 32,
  sym_comment = 33,
  sym__newline = 34,
  sym_source_file = 35,
  sym_bteq_statement = 36,
  sym_simple_command = 37,
  sym_if_statement = 38,
  sym__else_clause = 39,
  sym_logon_command = 40,
  sym_quit_command = 41,
  sym_database_command = 42,
  sym__command_argument = 43,
  sym__condition = 44,
  sym_shell_variable = 45,
  sym_sql_statement = 46,
  sym_select_statement = 47,
  sym_select_elements = 48,
  sym_column_reference = 49,
  sym_table_reference = 50,
  sym_alias_expression = 51,
  sym_group_by_clause = 52,
  sym_having_clause = 53,
  sym__expression = 54,
  sym_comparison_expression = 55,
  sym_function_call = 56,
  sym_date_expression = 57,
  sym__literal = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_select_elements_repeat1 = 60,
  aux_sym_group_by_clause_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_logon] = "logon",
  [anon_sym_quit] = "quit",
  [anon_sym_database] = "database",
  [sym_system_variable] = "system_variable",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_select] = "select",
  [anon_sym_from] = "from",
  [anon_sym_COMMA] = ",",
  [sym_star] = "star",
  [anon_sym_as] = "as",
  [anon_sym_group] = "group",
  [anon_sym_by] = "by",
  [anon_sym_having] = "having",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_date] = "date",
  [anon_sym_format] = "format",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_bteq_statement] = "bteq_statement",
  [sym_simple_command] = "simple_command",
  [sym_if_statement] = "if_statement",
  [sym__else_clause] = "_else_clause",
  [sym_logon_command] = "logon_command",
  [sym_quit_command] = "quit_command",
  [sym_database_command] = "database_command",
  [sym__command_argument] = "_command_argument",
  [sym__condition] = "_condition",
  [sym_shell_variable] = "shell_variable",
  [sym_sql_statement] = "sql_statement",
  [sym_select_statement] = "select_statement",
  [sym_select_elements] = "select_elements",
  [sym_column_reference] = "column_reference",
  [sym_table_reference] = "table_reference",
  [sym_alias_expression] = "alias_expression",
  [sym_group_by_clause] = "group_by_clause",
  [sym_having_clause] = "having_clause",
  [sym__expression] = "_expression",
  [sym_comparison_expression] = "comparison_expression",
  [sym_function_call] = "function_call",
  [sym_date_expression] = "date_expression",
  [sym__literal] = "_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_elements_repeat1] = "select_elements_repeat1",
  [aux_sym_group_by_clause_repeat1] = "group_by_clause_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_logon] = anon_sym_logon,
  [anon_sym_quit] = anon_sym_quit,
  [anon_sym_database] = anon_sym_database,
  [sym_system_variable] = sym_system_variable,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_star] = sym_star,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_having] = anon_sym_having,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_format] = anon_sym_format,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_bteq_statement] = sym_bteq_statement,
  [sym_simple_command] = sym_simple_command,
  [sym_if_statement] = sym_if_statement,
  [sym__else_clause] = sym__else_clause,
  [sym_logon_command] = sym_logon_command,
  [sym_quit_command] = sym_quit_command,
  [sym_database_command] = sym_database_command,
  [sym__command_argument] = sym__command_argument,
  [sym__condition] = sym__condition,
  [sym_shell_variable] = sym_shell_variable,
  [sym_sql_statement] = sym_sql_statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_elements] = sym_select_elements,
  [sym_column_reference] = sym_column_reference,
  [sym_table_reference] = sym_table_reference,
  [sym_alias_expression] = sym_alias_expression,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym_having_clause] = sym_having_clause,
  [sym__expression] = sym__expression,
  [sym_comparison_expression] = sym_comparison_expression,
  [sym_function_call] = sym_function_call,
  [sym_date_expression] = sym_date_expression,
  [sym__literal] = sym__literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_elements_repeat1] = aux_sym_select_elements_repeat1,
  [aux_sym_group_by_clause_repeat1] = aux_sym_group_by_clause_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_database] = {
    .visible = true,
    .named = false,
  },
  [sym_system_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_star] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_having] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_bteq_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_command] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__else_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_logon_command] = {
    .visible = true,
    .named = true,
  },
  [sym_quit_command] = {
    .visible = true,
    .named = true,
  },
  [sym_database_command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_argument] = {
    .visible = false,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_shell_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_elements] = {
    .visible = true,
    .named = true,
  },
  [sym_column_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_table_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_having_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_date_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_elements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_by_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 10,
  [19] = 8,
  [20] = 7,
  [21] = 16,
  [22] = 9,
  [23] = 23,
  [24] = 11,
  [25] = 12,
  [26] = 13,
  [27] = 15,
  [28] = 28,
  [29] = 23,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 34,
  [39] = 30,
  [40] = 14,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 76,
  [77] = 73,
  [78] = 46,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 79,
  [84] = 84,
  [85] = 80,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 61,
  [94] = 89,
  [95] = 95,
  [96] = 55,
  [97] = 86,
  [98] = 92,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 101,
  [103] = 103,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '$', 62,
        '\'', 4,
        '(', 95,
        ')', 96,
        '*', 84,
        ',', 83,
        '-', 63,
        '.', 67,
        '/', 5,
        ';', 68,
        '<', 89,
        '=', 91,
        '>', 90,
        'A', 6,
        'a', 51,
        'b', 61,
        'd', 18,
        'e', 36,
        'f', 44,
        'g', 50,
        'h', 19,
        'i', 30,
        'l', 43,
        'q', 58,
        's', 29,
        't', 33,
        '}', 79,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'A') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(114);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'V') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'Y') ADVANCE(7);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(82);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'v') ADVANCE(35);
      END_STATE();
    case 61:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == '{') ADVANCE(78);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 64:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '$', 62,
        '\'', 4,
        '-', 63,
        '.', 67,
        '/', 5,
        ';', 68,
        'e', 120,
        's', 119,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(68);
      if (lookahead == 's') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_logon);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_quit);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_database);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_system_variable);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_system_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_star);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_having);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_date);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 1, .external_lex_state = 2},
  [3] = {.lex_state = 1, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 64, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 3, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 65, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0, .external_lex_state = 2},
  [21] = {.lex_state = 3, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 1, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 2},
  [35] = {.lex_state = 1, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 2},
  [37] = {.lex_state = 1, .external_lex_state = 2},
  [38] = {.lex_state = 1, .external_lex_state = 2},
  [39] = {.lex_state = 0, .external_lex_state = 2},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 0, .external_lex_state = 2},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 2, .external_lex_state = 2},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 2},
  [50] = {.lex_state = 2, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 2, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 2, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 2, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 2, .external_lex_state = 2},
  [95] = {.lex_state = 2, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 2, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 2, .external_lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_logon] = ACTIONS(1),
    [anon_sym_quit] = ACTIONS(1),
    [anon_sym_database] = ACTIONS(1),
    [sym_system_variable] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_star] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_having] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_bteq_statement] = STATE(43),
    [sym_sql_statement] = STATE(43),
    [sym_select_statement] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(7),
    [anon_sym_select] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(15), 1,
      sym_star,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(87), 1,
      sym_select_elements,
    STATE(88), 1,
      sym_table_reference,
    STATE(100), 1,
      sym_shell_variable,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    STATE(76), 2,
      sym_column_reference,
      sym_alias_expression,
    STATE(45), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [40] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_star,
    STATE(88), 1,
      sym_table_reference,
    STATE(100), 1,
      sym_shell_variable,
    ACTIONS(19), 2,
      sym_number,
      sym_string,
    STATE(84), 2,
      sym_column_reference,
      sym_alias_expression,
    STATE(45), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [77] = 4,
    STATE(8), 1,
      sym__literal,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym__literal,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    ACTIONS(25), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [127] = 5,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_having,
      sym_comment,
  [152] = 3,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [173] = 3,
    ACTIONS(51), 1,
      anon_sym_format,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [194] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [212] = 6,
    ACTIONS(61), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(59), 2,
      anon_sym_else,
      anon_sym_select,
    ACTIONS(63), 2,
      sym_number,
      sym_string,
    STATE(62), 3,
      sym__command_argument,
      sym_shell_variable,
      sym__literal,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_comment,
  [238] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [256] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [274] = 2,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [292] = 3,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(79), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      sym_comment,
  [312] = 2,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 11,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_COMMA,
      anon_sym_having,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      sym_comment,
  [330] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(85), 1,
      sym_system_variable,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(48), 1,
      sym_comparison_expression,
    STATE(101), 1,
      sym__condition,
    ACTIONS(87), 2,
      sym_number,
      sym_string,
    STATE(54), 4,
      sym__expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 2,
      anon_sym_from,
      anon_sym_COMMA,
    ACTIONS(41), 5,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [384] = 6,
    ACTIONS(59), 1,
      anon_sym_select,
    ACTIONS(61), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(63), 2,
      sym_number,
      sym_string,
    STATE(62), 3,
      sym__command_argument,
      sym_shell_variable,
      sym__literal,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      sym_comment,
  [409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_format,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [451] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_system_variable,
    STATE(48), 1,
      sym_comparison_expression,
    STATE(102), 1,
      sym__condition,
    ACTIONS(87), 2,
      sym_number,
      sym_string,
    STATE(54), 4,
      sym__expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(103), 2,
      sym_number,
      sym_string,
    STATE(33), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 8,
      anon_sym_then,
      anon_sym_COMMA,
      anon_sym_as,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_RPAREN,
  [594] = 3,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      sym_comment,
  [612] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      sym_number,
      sym_string,
    STATE(31), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [636] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_if,
    ACTIONS(115), 1,
      anon_sym_logon,
    ACTIONS(117), 1,
      anon_sym_quit,
    ACTIONS(119), 1,
      anon_sym_database,
    STATE(58), 2,
      sym_simple_command,
      sym_if_statement,
    STATE(57), 3,
      sym_logon_command,
      sym_quit_command,
      sym_database_command,
  [661] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(129), 2,
      sym_number,
      sym_string,
    STATE(24), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [705] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [728] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_date,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(133), 2,
      sym_number,
      sym_string,
    STATE(40), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [749] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_date,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(137), 2,
      sym_number,
      sym_string,
    STATE(28), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_date,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 2,
      sym_number,
      sym_string,
    STATE(6), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [791] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_date,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(11), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [812] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_date,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(145), 2,
      sym_number,
      sym_string,
    STATE(14), 5,
      sym__expression,
      sym_comparison_expression,
      sym_function_call,
      sym_date_expression,
      sym__literal,
  [833] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_logon,
    ACTIONS(119), 1,
      anon_sym_database,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(149), 1,
      anon_sym_quit,
    STATE(58), 2,
      sym_simple_command,
      sym_if_statement,
    STATE(57), 3,
      sym_logon_command,
      sym_quit_command,
      sym_database_command,
  [858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [876] = 5,
    ACTIONS(153), 1,
      anon_sym_group,
    ACTIONS(155), 1,
      anon_sym_having,
    STATE(53), 1,
      sym_group_by_clause,
    STATE(67), 1,
      sym_having_clause,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      sym_comment,
  [896] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_then,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [916] = 6,
    ACTIONS(7), 1,
      anon_sym_DOT,
    ACTIONS(9), 1,
      anon_sym_select,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      sym_comment,
    STATE(68), 1,
      sym_select_statement,
    STATE(47), 3,
      sym_bteq_statement,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
  [937] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(163), 3,
      sym_number,
      sym_string,
      sym_identifier,
    STATE(63), 3,
      sym__command_argument,
      sym_shell_variable,
      sym__literal,
  [954] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_as,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [971] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_having,
      sym_comment,
  [986] = 6,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_DOT,
    ACTIONS(175), 1,
      anon_sym_select,
    ACTIONS(178), 1,
      sym_comment,
    STATE(68), 1,
      sym_select_statement,
    STATE(47), 3,
      sym_bteq_statement,
      sym_sql_statement,
      aux_sym_source_file_repeat1,
  [1007] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_then,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1024] = 3,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_group_by_clause_repeat1,
    ACTIONS(181), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_having,
      sym_comment,
  [1039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(183), 3,
      sym_number,
      sym_string,
      sym_identifier,
    STATE(64), 3,
      sym__command_argument,
      sym_shell_variable,
      sym__literal,
  [1056] = 1,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_group,
      anon_sym_having,
      sym_comment,
  [1066] = 3,
    ACTIONS(187), 1,
      anon_sym_else,
    STATE(59), 1,
      sym__else_clause,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      sym_comment,
  [1080] = 3,
    ACTIONS(155), 1,
      anon_sym_having,
    STATE(69), 1,
      sym_having_clause,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      sym_comment,
  [1094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
  [1108] = 1,
    ACTIONS(191), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      anon_sym_group,
      anon_sym_having,
      sym_comment,
  [1118] = 3,
    ACTIONS(193), 1,
      anon_sym_else,
    STATE(59), 1,
      sym__else_clause,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      sym_comment,
  [1132] = 1,
    ACTIONS(195), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1141] = 2,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1152] = 1,
    ACTIONS(201), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1161] = 1,
    ACTIONS(203), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1170] = 1,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1179] = 1,
    ACTIONS(207), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1188] = 1,
    ACTIONS(209), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1197] = 1,
    ACTIONS(211), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1206] = 1,
    ACTIONS(213), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_select,
      sym_comment,
  [1215] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(41), 1,
      sym_table_reference,
    STATE(99), 1,
      sym_shell_variable,
  [1231] = 1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      sym_comment,
  [1239] = 2,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_select,
      sym_comment,
  [1249] = 1,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_select,
      sym_comment,
  [1257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_from,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_select_elements_repeat1,
  [1270] = 1,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_select,
      sym_comment,
  [1277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_group_by_clause_repeat1,
  [1290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(25), 1,
      sym__literal,
    ACTIONS(231), 2,
      sym_number,
      sym_string,
  [1301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_from,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_select_elements_repeat1,
  [1314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_group_by_clause_repeat1,
  [1327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_from,
    STATE(70), 1,
      aux_sym_select_elements_repeat1,
  [1340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym__literal,
    ACTIONS(242), 2,
      sym_number,
      sym_string,
  [1351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_group_by_clause_repeat1,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DOT,
    STATE(60), 1,
      sym_bteq_statement,
  [1374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_bteq_statement,
  [1384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_from,
      anon_sym_COMMA,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_from,
      anon_sym_COMMA,
  [1400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(60), 1,
      sym_bteq_statement,
  [1410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_from,
      anon_sym_COMMA,
  [1418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_bteq_statement,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_identifier,
  [1435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_from,
  [1442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_DOT,
  [1449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_identifier,
  [1456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
  [1463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_by,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
  [1477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_DOT,
  [1484] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym_identifier,
  [1491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_identifier,
  [1498] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DOT,
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_identifier,
  [1512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
  [1519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_DOT,
  [1526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_DOT,
  [1533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_then,
  [1540] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_then,
  [1547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 127,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 212,
  [SMALL_STATE(11)] = 238,
  [SMALL_STATE(12)] = 256,
  [SMALL_STATE(13)] = 274,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 312,
  [SMALL_STATE(16)] = 330,
  [SMALL_STATE(17)] = 359,
  [SMALL_STATE(18)] = 384,
  [SMALL_STATE(19)] = 409,
  [SMALL_STATE(20)] = 430,
  [SMALL_STATE(21)] = 451,
  [SMALL_STATE(22)] = 480,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 522,
  [SMALL_STATE(25)] = 540,
  [SMALL_STATE(26)] = 558,
  [SMALL_STATE(27)] = 576,
  [SMALL_STATE(28)] = 594,
  [SMALL_STATE(29)] = 612,
  [SMALL_STATE(30)] = 636,
  [SMALL_STATE(31)] = 661,
  [SMALL_STATE(32)] = 684,
  [SMALL_STATE(33)] = 705,
  [SMALL_STATE(34)] = 728,
  [SMALL_STATE(35)] = 749,
  [SMALL_STATE(36)] = 770,
  [SMALL_STATE(37)] = 791,
  [SMALL_STATE(38)] = 812,
  [SMALL_STATE(39)] = 833,
  [SMALL_STATE(40)] = 858,
  [SMALL_STATE(41)] = 876,
  [SMALL_STATE(42)] = 896,
  [SMALL_STATE(43)] = 916,
  [SMALL_STATE(44)] = 937,
  [SMALL_STATE(45)] = 954,
  [SMALL_STATE(46)] = 971,
  [SMALL_STATE(47)] = 986,
  [SMALL_STATE(48)] = 1007,
  [SMALL_STATE(49)] = 1024,
  [SMALL_STATE(50)] = 1039,
  [SMALL_STATE(51)] = 1056,
  [SMALL_STATE(52)] = 1066,
  [SMALL_STATE(53)] = 1080,
  [SMALL_STATE(54)] = 1094,
  [SMALL_STATE(55)] = 1108,
  [SMALL_STATE(56)] = 1118,
  [SMALL_STATE(57)] = 1132,
  [SMALL_STATE(58)] = 1141,
  [SMALL_STATE(59)] = 1152,
  [SMALL_STATE(60)] = 1161,
  [SMALL_STATE(61)] = 1170,
  [SMALL_STATE(62)] = 1179,
  [SMALL_STATE(63)] = 1188,
  [SMALL_STATE(64)] = 1197,
  [SMALL_STATE(65)] = 1206,
  [SMALL_STATE(66)] = 1215,
  [SMALL_STATE(67)] = 1231,
  [SMALL_STATE(68)] = 1239,
  [SMALL_STATE(69)] = 1249,
  [SMALL_STATE(70)] = 1257,
  [SMALL_STATE(71)] = 1270,
  [SMALL_STATE(72)] = 1277,
  [SMALL_STATE(73)] = 1290,
  [SMALL_STATE(74)] = 1301,
  [SMALL_STATE(75)] = 1314,
  [SMALL_STATE(76)] = 1327,
  [SMALL_STATE(77)] = 1340,
  [SMALL_STATE(78)] = 1351,
  [SMALL_STATE(79)] = 1364,
  [SMALL_STATE(80)] = 1374,
  [SMALL_STATE(81)] = 1384,
  [SMALL_STATE(82)] = 1392,
  [SMALL_STATE(83)] = 1400,
  [SMALL_STATE(84)] = 1410,
  [SMALL_STATE(85)] = 1418,
  [SMALL_STATE(86)] = 1428,
  [SMALL_STATE(87)] = 1435,
  [SMALL_STATE(88)] = 1442,
  [SMALL_STATE(89)] = 1449,
  [SMALL_STATE(90)] = 1456,
  [SMALL_STATE(91)] = 1463,
  [SMALL_STATE(92)] = 1470,
  [SMALL_STATE(93)] = 1477,
  [SMALL_STATE(94)] = 1484,
  [SMALL_STATE(95)] = 1491,
  [SMALL_STATE(96)] = 1498,
  [SMALL_STATE(97)] = 1505,
  [SMALL_STATE(98)] = 1512,
  [SMALL_STATE(99)] = 1519,
  [SMALL_STATE(100)] = 1526,
  [SMALL_STATE(101)] = 1533,
  [SMALL_STATE(102)] = 1540,
  [SMALL_STATE(103)] = 1547,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_expression, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_expression, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_expression, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_expression, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quit_command, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quit_command, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_expression, 3, 0, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_expression, 3, 0, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_expression, 4, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_expression, 4, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_reference, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_command, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bteq_statement, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__else_clause, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_variable, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quit_command, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logon_command, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_command, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bteq_statement, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2, 0, 0),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_elements_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_elements, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_by_clause_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_reference, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_expression, 3, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__newline = 0,
  ts_external_token_comment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bteq_external_scanner_create(void);
void tree_sitter_bteq_external_scanner_destroy(void *);
bool tree_sitter_bteq_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bteq_external_scanner_serialize(void *, char *);
void tree_sitter_bteq_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bteq(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bteq_external_scanner_create,
      tree_sitter_bteq_external_scanner_destroy,
      tree_sitter_bteq_external_scanner_scan,
      tree_sitter_bteq_external_scanner_serialize,
      tree_sitter_bteq_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
