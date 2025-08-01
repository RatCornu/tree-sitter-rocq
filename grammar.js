module.exports = grammar({
  name: 'coq',

  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.definition,
      $.theorem,
      $.proof,
      $.command
    ),

    definition: $ => seq(
      choice('Definition', 'Fixpoint', 'Inductive'),
      $.identifier,
      ':',
      $.identifier,
      ':=',
      $._expr,
      '.'
    ),

    theorem: $ => seq(
      choice('Theorem', 'Lemma', 'Proposition'),
      $.identifier,
      ':',
      $._expr,
      '.'
    ),

    proof: $ => seq(
      'Proof',
      '.',
      repeat($._tactic),
      'Qed',
      '.'
    ),

    command: $ => seq(
      choice('Require', 'Import', 'From'),
      repeat($.identifier),
      '.'
    ),

    _tactic: $ => seq($.identifier, '.'),

    _expr: $ => choice(
      $.identifier,
      $.number,
      $.string
    ),

    identifier: $ => /[A-Za-z_][A-Za-z0-9_]*/,

    number: $ => /\d+/,

    string: $ => /"[^"]*"/,

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
