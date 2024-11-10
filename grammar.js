/**
 * @file grammar for BTEQ/SQL
 * @author aamayam <alan.amayamtz@gmail.com>
 * @license MIT
 */

// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bteq",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
