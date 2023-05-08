module.exports = grammar({
  name: 'css',

  extras: $ => [/\s/],

  rules: {
    doc: $ =>
      repeat(
        choice(
          $.import,
          $.comment_block,
          $.comment_line,
          $.import,
          $.string,
          $.tbd
        )
      ),

    // Catch-all rule for constructs we don't care about
    tbd: $ => prec(-1, repeat1(/./)),

    // imports
    import_keyword: $ => seq(/\w+/, optional(',')),
    import_keywords: $ => seq('(', repeat($.import_keyword), ')'),
    import: $ => seq('@import', optional($.import_keywords), $.string, ';'),

    // Rules for constructs that might contain imports that aren't actually
    // imports (e.g. strings & comments)
    string: $ =>
      token(
        choice(
          seq("'", /([^'\n]|\\(.|\n))*/, "'"),
          seq('"', /([^"\n]|\\(.|\n))*/, '"')
        )
      ),

    // /**... */-style comments.  Got the regex here from tree-sitter-css. 'Not
    // entirely sure why it works, but it does.
    comment_block: $ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),
    comment_line: $ => token(seq('//', /.+/)),
  },
});
