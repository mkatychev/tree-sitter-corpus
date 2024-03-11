// If your language’s syntax conflicts with the === and --- test separators,
// you can optionally add an arbitrary identical suffix (in the below example, |||) to disambiguate them:
/*
==================|||
Basic module
==================|||

---- MODULE Test ----
increment(n) == n + 1
====

---|||

(source_file
  (module (identifier)
    (operator (identifier)
      (parameter_list (identifier))
      (plus (identifier_ref) (number)))))
*/


/// Simple
/*
==================
Return statements
==================

func x() int {
  return 1;
}

---

(source_file
  (function_definition
    (identifier)
    (parameter_list)
    (primitive_type)
    (block
      (return_statement (number)))))
*/
const ESCAPE_SEQUENCE = token(/[-=]{3,}(.+)/);
// https://github.com/tree-sitter/tree-sitter/blob/v0.22.1/cli/src/generate/dsl.js#L278
const NODE_IDENTIFIER = /[a-zA-Z_]\w*/;
// TODO add EBNF notation
module.exports = grammar({
  name: 'corpus',

  word: $ => $.text,

  externals: $ => [
    $._newline,
    $.text,
  ],


  rules: {
    source_file: $ => seq(repeat($.test)),

    test: $ => seq($._header, $._newline, $.input, $._median, $.output, $._newline),
    _header_delim: $ => seq(/===+/, $._newline),
    _header: $ => seq($._header_delim, field("name", $.text), $._newline, $._header_delim),
    _median: $ => seq(/---+/, $._newline),
    // input
    _input_line: $ => repeat1($.text),
    input: $ => seq(repeat1(choice(seq($._input_line, $._newline), $._newline))),
    // output
    output: $ => repeat1($.node),
    _node_expression: $ => choice(
      $.node,
      $.field_definition,
    ),
    node: $ => seq(
      "(",
      field("name", $.identifier),
      repeat($._node_expression),
      ")"
    ),
    identifier: $ => NODE_IDENTIFIER,
    _field_name: $ => seq($.identifier, ":"),
    field_definition: $ => seq(
      field("name", $._field_name),
      $._node_expression,
    ),

  }
});
