module.exports = grammar({
  name: 'coq',

  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    source_file: $ => repeat($._token),

    _token: $ => choice(
      $.comment,
      $.string,
      $.number,
      $.identifier,
      /[^\s]+/
    ),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_']*/,

    number: $ => /\d+/, 

    string: $ => token(seq(
      '"',
      /[^"]*/,
      '"'
    )),

    comment: $ => seq(
      '(*',
      repeat(choice(
        $.comment,
        /[^*]/,
        seq('*', /[^)]/)
      )),
      '*)'
    ),
  }
});
