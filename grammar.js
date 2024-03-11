

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
const NODE_IDENTIFIER = token(/[a-zA-Z_]\w*/);
const LANG_IDENTIFIER = /[a-zA-Z_][\w-]*/;
// TODO add EBNF notation
module.exports = grammar({
  name: 'corpus',

  externals: $ => [
    $._newline,
    $.text,
  ],
  // Allow comments, backslash-escaped newlines (with optional trailing whitespace),
  // and whitespace anywhere
  extras: $ => [$.comment, /\s/],


  rules: {
    source_file: $ => choice(repeat($.test), repeat($._test__)),
    // Regex definitions
    // https://github.com/tree-sitter/tree-sitter/blob/v0.22.1/cli/src/test.rs#L20-L29
    test: $ => seq($._header, $.input, $._median, $.output, $._newline),
    _test_name: $ => seq(field("name", seq(/[^=:]/, $.text)), $._newline),
    attribute: $ => seq(
      choice(
        ":skip",
        ":error",
        ":fail-fast",
        $._language_attribute,
        seq(":platform", "(", $.platform, ")"),
      ),
      $._newline,
    ),
    _language_attribute: $ => seq(":language", "(", $.language, ")"),
    language: _ => LANG_IDENTIFIER,
    // https://doc.rust-lang.org/std/env/consts/constant.OS.html
    platform: _ => /[a-z]+/,

    _header_delim: $ => seq(/===+/, $._newline),
    _header: $ => seq(
      $._header_delim,
      $._test_name,
      repeat($.attribute),
      $._header_delim
    ),
    _median: $ => seq(/---+/, $._newline),
    // https://tree-sitter.github.io/tree-sitter/creating-parsers
    // > If your language’s syntax conflicts with the `===` and `---` test separators,
    // > you can optionally add an arbitrary identical suffix (in the below example, `|||`) to disambiguate them:
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
    suffix__: $ => /[^=]\S*/,
    _test__: $ => seq($._header__, $.input, $._median__, $.output, $._newline),
    header_delim__: $ => seq(/===+/, $.suffix__, $._newline),
    _header__: $ => seq(
      $.header_delim__,
      $._test_name,
      repeat($.attribute),
      $.header_delim__,
    ),
    _median__: $ => seq(/---+/, $.suffix__, $._newline),






    // input
    _input_line: $ => /.+/,
    input: $ => repeat1(seq($._input_line, $._newline)),
    // output
    output: $ => repeat1($.node),
    node: $ => seq(
      "(",
      $.identifier,
      repeat(seq(
        optional(seq(alias($.identifier, $.field_name), ":")),
        $.node,
      )),
      ")"
    ),
    identifier: $ => NODE_IDENTIFIER,

    // `; ...` comment
    comment: (_) => token(prec(-1, /;.*/)),

  }
});
