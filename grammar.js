module.exports = grammar({
  name: 'rocq',

  extras: $ => [
    /\s/,
    $.comment
  ],

  word: $ => $.identifier,

  rules: {
    // A Coq file is a sequence of sentences, each terminated by a '.'
    source_file: $ => repeat($._sentence),

    _sentence: $ => seq(
      choice(
        $.definition,
        $.lemma,
        $.theorem,
        $.inductive,
        $.fixpoint,
        $.cofixpoint,
        $.require,
        $.section,
        $.end,
        $.proof,
        $.proof_terminator,
        $.tactic_sentence,
        $.generic_sentence
      ),
      '.'
    ),

    // Identifiers and basic tokens
    identifier: $ => /[A-Za-z_][A-Za-z0-9_']*/,

    number: $ => /\d+/, 

    string: $ => token(seq('"', repeat(choice(/[^"\\\n]/, /\\./)), '"')),

    // Nested comments: (* ... (* ... *) ... *)
    comment: $ => seq(
      '(*',
      repeat(choice(
        $.comment,
        /[^*]/,
        seq('*', /[^)]/)
      )),
      '*)'
    ),

    // Qualified identifier like Coq.Lists.List
    qualid: $ => prec(1, seq(
      $.identifier,
      repeat(seq(token.immediate('.'), $.identifier))
    )),

    // Common building blocks
    paren_term: $ => seq('(', $.term, ')'),

    implicit_binder: $ => seq('{', repeat1($.identifier), ':', $.term, '}'),
    explicit_binder: $ => seq('(', repeat1($.identifier), ':', $.term, ')'),
    binder: $ => choice($.explicit_binder, $.implicit_binder, $.identifier),

    // Terms (very lightweight Gallina subset sufficient for headers and simple bodies)
    term: $ => choice(
      $.lambda,
      $.pi_type,
      $.forall_type,
      $.let_in,
      $.match,
      $.application,
      $.qualid,
      $.identifier,
      $.number,
      $.string,
      $.paren_term
    ),

    lambda: $ => prec.right(seq('fun', repeat1($.binder), '=>', $.term)),
    forall_type: $ => prec.right(seq('forall', repeat1($.binder), ',', $.term)),
    pi_type: $ => prec.right(seq($.term, '->', $.term)),

    let_in: $ => prec(1, seq(
      'let',
      field('name', $.identifier),
      optional(seq(':', $.term)),
      ':=',
      field('value', $.term),
      'in',
      field('in', $.term)
    )),

    match: $ => seq(
      'match', $.term, 'with',
      repeat1($.match_case),
      'end'
    ),

    match_case: $ => seq('|', $.pattern, '=>', $.term),
    pattern: $ => repeat1(choice($.identifier, $.qualid, $.number, $.string, $.paren_term)),

    application: $ => prec.left(seq($.simple_term, repeat1($.simple_term))),
    simple_term: $ => choice($.qualid, $.identifier, $.number, $.string, $.paren_term),

    // Vernacular sentences
    definition: $ => seq(
      'Definition',
      field('name', $.identifier),
      repeat($.binder),
      optional(seq(':', field('type', $.term))),
      ':=',
      field('body', $.term)
    ),

    lemma: $ => seq(
      'Lemma',
      field('name', $.identifier),
      ':',
      field('type', $.term)
    ),

    theorem: $ => seq(
      choice('Theorem', 'Remark', 'Corollary', 'Proposition'),
      field('name', $.identifier),
      ':',
      field('type', $.term)
    ),

    inductive: $ => seq(
      'Inductive',
      field('name', $.identifier),
      repeat($.binder),
      optional(seq(':', field('type', $.term))),
      ':=',
      repeat1($.constructor_decl)
    ),

    constructor_decl: $ => seq(
      '|',
      field('name', $.identifier),
      ':',
      field('type', $.term)
    ),

    fixpoint: $ => seq(
      'Fixpoint',
      field('name', $.identifier),
      repeat($.binder),
      optional(seq(':', field('type', $.term))),
      ':=',
      field('body', $.term)
    ),

    cofixpoint: $ => seq(
      'CoFixpoint',
      field('name', $.identifier),
      repeat($.binder),
      optional(seq(':', field('type', $.term))),
      ':=',
      field('body', $.term)
    ),

    require: $ => seq(
      choice('Require', seq('From', $.qualid, 'Require')),
      optional(choice('Import', 'Export')),
      repeat1($.qualid)
    ),

    section: $ => seq('Section', field('name', $.identifier)),
    end: $ => seq('End', field('name', $.identifier)),

    proof: $ => 'Proof',
    proof_terminator: $ => choice('Qed', 'Defined', 'Admitted', 'Abort'),

    // Tactics: parse commonly used ones with loose arguments
    tactic_sentence: $ => seq($.tactic, repeat($._tactic_arg)),
    tactic: $ => choice(
      'intros', 'intro', 'apply', 'exact', 'reflexivity', 'assumption',
      'rewrite', 'simpl', 'cbn', 'cbv', 'subst', 'split', 'constructor',
      'destruct', 'induction', 'inversion', 'auto', 'trivial', 'now', 'easy'
    ),
    _tactic_arg: $ => choice(
      $.identifier, $.qualid, $.number, $.string,
      'in', 'as', 'using', 'with',
      '->', '<-', ':', ':=', ',', ';', '|', '?', '!',
      '(', ')', '[', ']', '{', '}'
    ),

    // Generic fallback for any sentence not recognized above
    generic_sentence: $ => prec(-1, repeat1(choice(
      $.identifier, $.qualid, $.number, $.string,
      '(', ')', '{', '}', '[', ']', ':', ':=', ',', ';', '=>', '->', '<-', '|'
    ))),
  }
});
