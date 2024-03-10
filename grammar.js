const ts_query = require("tree-sitter-query/grammar");
// TODO capture escape token
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

// TODO add EBNF notation
module.exports = grammar(ts_query, {
  name: 'ts_test',

  // externals: ($, _) => [
  //   $._newline,
  //   $.text,
  // ],


  rules: {
    text: _ => /[a-zA-Z]/,
    _newline: _ => /\n/,
    // TODO: add the actual grammar rules
    source_file: ($, _) => seq(repeat($.test)),

    test: $ => seq($._header, $._median, $.input, $._median, $.output, $._newline),
    _header_delim: _ => /={3,}/,
    _header: ($, _) => seq($._header_delim, $._newline, field("name", $.text), $._newline),
    // --(-)+
    _median: (_) => /-{3,}/,
    // input
    _input_line: ($, _) => repeat1($.text),
    input: ($, _) => seq(repeat1(choice(seq($._input_line, $._newline), $._newline))),
    // output
    output: ($, _) => repeat1($._definition),
    // output scm
    // _syntax_tree: ($, _) => alias($._definition, $.syntax_tree),
    _definition: (_, scm) => scm,

  }
});
