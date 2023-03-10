module.exports = grammar({
  name: 'nginx',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.block_definition,
      $.statement,
      $.comment,
    ),
    block_definition: $ => seq(
      $.identifier,
      optional(choice('~')),
      optional(field("args", $.literal)),
      '{',
      field(
        "consequence",
        repeat(
          choice(
            $.block_definition,
            $.statement,
            $.comment
          )
        )
      ),
      '}'
    ),
    field: $ => seq(
      $.identifier,
      '=',
      $.literal
    ),
    statement: $ => choice(
      $.call_stmt,
    ),
    call_stmt: $ => seq(
      $.identifier,
      repeat1(
        $.literal,
      ),
      ';',
    ),
    comment: $ => /#.*/,

    // source: https://github.com/tree-sitter/tree-sitter-javascript/blob/5720b249490b3c17245ba772f6be4a43edb4e3b7/grammar.js#L1055-L1059
    identifier: $ => {
      const alpha = /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      const alphanumeric = /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
      return token(seq(alpha, repeat(alphanumeric)))
    },
    literal: $ => choice(
      /[^'"}{;\s]+/,
      $.string,
    ),
    // source: https://github.com/tree-sitter/tree-sitter-javascript/blob/5720b249490b3c17245ba772f6be4a43edb4e3b7/grammar.js#L906-L945
    string: $ => choice(
      seq(
        '"',
        repeat(
          choice(
            alias($.unescaped_double_string_fragment, $.string_fragment),
            $.escape_sequence
          )
        ),
        '"'
      ),
      seq(
        "'",
        repeat(
          choice(
            alias($.unescaped_single_string_fragment, $.string_fragment),
            $.escape_sequence
          )
        ),
        "'"
      )
    ),

    // Workaround to https://github.com/tree-sitter/tree-sitter/issues/1156
    // We give names to the token() constructs containing a regexp
    // so as to obtain a node in the CST.
    //
    unescaped_double_string_fragment: $ =>
      token.immediate(prec(1, /[^"\\]+/)),

    // same here
    unescaped_single_string_fragment: $ =>
      token.immediate(prec(1, /[^'\\]+/)),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      )
    )),
  }
});