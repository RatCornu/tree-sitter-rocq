#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_Definition = 1,
  anon_sym_Fixpoint = 2,
  anon_sym_Inductive = 3,
  anon_sym_COLON = 4,
  anon_sym_COLON_EQ = 5,
  anon_sym_DOT = 6,
  anon_sym_Theorem = 7,
  anon_sym_Lemma = 8,
  anon_sym_Proposition = 9,
  anon_sym_Proof = 10,
  anon_sym_Qed = 11,
  anon_sym_Require = 12,
  anon_sym_Import = 13,
  anon_sym_From = 14,
  sym_identifier = 15,
  sym_number = 16,
  sym_string = 17,
  anon_sym_LPAREN_STAR = 18,
  aux_sym_comment_token1 = 19,
  anon_sym_STAR = 20,
  aux_sym_comment_token2 = 21,
  anon_sym_STAR_RPAREN = 22,
  sym_source_file = 23,
  sym__statement = 24,
  sym_definition = 25,
  sym_theorem = 26,
  sym_proof = 27,
  sym_command = 28,
  sym__tactic = 29,
  sym__expr = 30,
  sym_comment = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_proof_repeat1 = 33,
  aux_sym_command_repeat1 = 34,
  aux_sym_comment_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Definition] = "Definition",
  [anon_sym_Fixpoint] = "Fixpoint",
  [anon_sym_Inductive] = "Inductive",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_DOT] = ".",
  [anon_sym_Theorem] = "Theorem",
  [anon_sym_Lemma] = "Lemma",
  [anon_sym_Proposition] = "Proposition",
  [anon_sym_Proof] = "Proof",
  [anon_sym_Qed] = "Qed",
  [anon_sym_Require] = "Require",
  [anon_sym_Import] = "Import",
  [anon_sym_From] = "From",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_LPAREN_STAR] = "(*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_STAR_RPAREN] = "*)",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_definition] = "definition",
  [sym_theorem] = "theorem",
  [sym_proof] = "proof",
  [sym_command] = "command",
  [sym__tactic] = "_tactic",
  [sym__expr] = "_expr",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_proof_repeat1] = "proof_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Definition] = anon_sym_Definition,
  [anon_sym_Fixpoint] = anon_sym_Fixpoint,
  [anon_sym_Inductive] = anon_sym_Inductive,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Theorem] = anon_sym_Theorem,
  [anon_sym_Lemma] = anon_sym_Lemma,
  [anon_sym_Proposition] = anon_sym_Proposition,
  [anon_sym_Proof] = anon_sym_Proof,
  [anon_sym_Qed] = anon_sym_Qed,
  [anon_sym_Require] = anon_sym_Require,
  [anon_sym_Import] = anon_sym_Import,
  [anon_sym_From] = anon_sym_From,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_STAR_RPAREN] = anon_sym_STAR_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_definition] = sym_definition,
  [sym_theorem] = sym_theorem,
  [sym_proof] = sym_proof,
  [sym_command] = sym_command,
  [sym__tactic] = sym__tactic,
  [sym__expr] = sym__expr,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_proof_repeat1] = aux_sym_proof_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Definition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fixpoint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Inductive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Theorem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Lemma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Proposition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Proof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Qed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_From] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_theorem] = {
    .visible = true,
    .named = true,
  },
  [sym_proof] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__tactic] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [5] = 5,
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
  [18] = 18,
  [19] = 19,
  [20] = 14,
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 25,
  [47] = 27,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      ADVANCE_MAP(
        '"', 2,
        '(', 6,
        '*', 93,
        '.', 74,
        ':', 72,
        'D', 12,
        'F', 23,
        'I', 32,
        'L', 13,
        'P', 54,
        'Q', 17,
        'R', 14,
        'T', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == ':') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == 'Q') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '*') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'q') ADVANCE(64);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 66:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Definition);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Fixpoint);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_Inductive);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Theorem);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Lemma);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_Proposition);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Proof);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Qed);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Qed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Require);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Import);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_From);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '(') ADVANCE(92);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(89);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == ')') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '(') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(89);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5},
  [46] = {(TSStateId)(-1)},
  [47] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Definition] = ACTIONS(1),
    [anon_sym_Fixpoint] = ACTIONS(1),
    [anon_sym_Inductive] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Theorem] = ACTIONS(1),
    [anon_sym_Lemma] = ACTIONS(1),
    [anon_sym_Proposition] = ACTIONS(1),
    [anon_sym_Proof] = ACTIONS(1),
    [anon_sym_Qed] = ACTIONS(1),
    [anon_sym_Require] = ACTIONS(1),
    [anon_sym_Import] = ACTIONS(1),
    [anon_sym_From] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__statement] = STATE(6),
    [sym_definition] = STATE(5),
    [sym_theorem] = STATE(5),
    [sym_proof] = STATE(5),
    [sym_command] = STATE(5),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_Definition] = ACTIONS(7),
    [anon_sym_Fixpoint] = ACTIONS(7),
    [anon_sym_Inductive] = ACTIONS(7),
    [anon_sym_Theorem] = ACTIONS(9),
    [anon_sym_Lemma] = ACTIONS(9),
    [anon_sym_Proposition] = ACTIONS(9),
    [anon_sym_Proof] = ACTIONS(11),
    [anon_sym_Require] = ACTIONS(13),
    [anon_sym_Import] = ACTIONS(13),
    [anon_sym_From] = ACTIONS(13),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
  },
  [2] = {
    [sym__statement] = STATE(6),
    [sym_definition] = STATE(5),
    [sym_theorem] = STATE(5),
    [sym_proof] = STATE(5),
    [sym_command] = STATE(5),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_Definition] = ACTIONS(7),
    [anon_sym_Fixpoint] = ACTIONS(7),
    [anon_sym_Inductive] = ACTIONS(7),
    [anon_sym_Theorem] = ACTIONS(9),
    [anon_sym_Lemma] = ACTIONS(9),
    [anon_sym_Proposition] = ACTIONS(9),
    [anon_sym_Proof] = ACTIONS(11),
    [anon_sym_Require] = ACTIONS(13),
    [anon_sym_Import] = ACTIONS(13),
    [anon_sym_From] = ACTIONS(13),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
  },
  [3] = {
    [sym__statement] = STATE(6),
    [sym_definition] = STATE(5),
    [sym_theorem] = STATE(5),
    [sym_proof] = STATE(5),
    [sym_command] = STATE(5),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_Definition] = ACTIONS(19),
    [anon_sym_Fixpoint] = ACTIONS(19),
    [anon_sym_Inductive] = ACTIONS(19),
    [anon_sym_Theorem] = ACTIONS(22),
    [anon_sym_Lemma] = ACTIONS(22),
    [anon_sym_Proposition] = ACTIONS(22),
    [anon_sym_Proof] = ACTIONS(25),
    [anon_sym_Require] = ACTIONS(28),
    [anon_sym_Import] = ACTIONS(28),
    [anon_sym_From] = ACTIONS(28),
    [anon_sym_LPAREN_STAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(4), 1,
      sym_comment,
    ACTIONS(31), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [20] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(5), 1,
      sym_comment,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [40] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(6), 1,
      sym_comment,
    ACTIONS(35), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [60] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(37), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [80] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(39), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [100] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(41), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [120] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(43), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [140] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(45), 11,
      ts_builtin_sym_end,
      anon_sym_Definition,
      anon_sym_Fixpoint,
      anon_sym_Inductive,
      anon_sym_Theorem,
      anon_sym_Lemma,
      anon_sym_Proposition,
      anon_sym_Proof,
      anon_sym_Require,
      anon_sym_Import,
      anon_sym_From,
  [160] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_STAR_RPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_comment_repeat1,
  [179] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(55), 1,
      anon_sym_Qed,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_proof_repeat1,
    STATE(30), 1,
      sym__tactic,
  [198] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    ACTIONS(61), 1,
      anon_sym_STAR_RPAREN,
    STATE(12), 1,
      aux_sym_comment_repeat1,
    STATE(14), 1,
      sym_comment,
  [217] = 5,
    ACTIONS(63), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(66), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(72), 1,
      anon_sym_STAR_RPAREN,
    STATE(15), 2,
      sym_comment,
      aux_sym_comment_repeat1,
  [234] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(16), 1,
      sym_comment,
    STATE(34), 1,
      sym__expr,
    ACTIONS(74), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [249] = 6,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_Qed,
    STATE(17), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_proof_repeat1,
    STATE(30), 1,
      sym__tactic,
  [268] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(18), 1,
      sym_comment,
    STATE(31), 1,
      sym__expr,
    ACTIONS(74), 3,
      sym_identifier,
      sym_number,
      sym_string,
  [283] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(78), 1,
      anon_sym_Qed,
    ACTIONS(80), 1,
      sym_identifier,
    STATE(30), 1,
      sym__tactic,
    STATE(19), 2,
      sym_comment,
      aux_sym_proof_repeat1,
  [300] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_STAR_RPAREN,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_comment_repeat1,
  [319] = 6,
    ACTIONS(47), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(51), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_STAR_RPAREN,
    STATE(15), 1,
      aux_sym_comment_repeat1,
    STATE(21), 1,
      sym_comment,
  [338] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      sym_identifier,
    STATE(22), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_command_repeat1,
  [354] = 2,
    STATE(23), 1,
      sym_comment,
    ACTIONS(72), 4,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_token1,
      anon_sym_STAR,
      anon_sym_STAR_RPAREN,
  [364] = 5,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_command_repeat1,
    STATE(24), 1,
      sym_comment,
  [380] = 2,
    STATE(25), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_token1,
      anon_sym_STAR,
      anon_sym_STAR_RPAREN,
  [390] = 4,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(26), 2,
      sym_comment,
      aux_sym_command_repeat1,
  [404] = 2,
    STATE(27), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_LPAREN_STAR,
      aux_sym_comment_token1,
      anon_sym_STAR,
      anon_sym_STAR_RPAREN,
  [414] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(28), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_DOT,
      sym_identifier,
  [425] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(29), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_Qed,
      sym_identifier,
  [436] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(108), 2,
      anon_sym_Qed,
      sym_identifier,
  [447] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(31), 1,
      sym_comment,
  [457] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(112), 1,
      anon_sym_COLON_EQ,
    STATE(32), 1,
      sym_comment,
  [467] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(114), 1,
      anon_sym_DOT,
    STATE(33), 1,
      sym_comment,
  [477] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(116), 1,
      anon_sym_DOT,
    STATE(34), 1,
      sym_comment,
  [487] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(118), 1,
      anon_sym_COLON,
    STATE(35), 1,
      sym_comment,
  [497] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
  [507] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(122), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_comment,
  [517] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(38), 1,
      sym_comment,
  [527] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(126), 1,
      anon_sym_COLON,
    STATE(39), 1,
      sym_comment,
  [537] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(128), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_comment,
  [547] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(41), 1,
      sym_comment,
  [557] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(132), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_comment,
  [567] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(134), 1,
      anon_sym_DOT,
    STATE(43), 1,
      sym_comment,
  [577] = 3,
    ACTIONS(3), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(44), 1,
      sym_comment,
  [587] = 3,
    ACTIONS(138), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(140), 1,
      aux_sym_comment_token2,
    STATE(45), 1,
      sym_comment,
  [597] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [601] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 20,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 80,
  [SMALL_STATE(9)] = 100,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 140,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 198,
  [SMALL_STATE(15)] = 217,
  [SMALL_STATE(16)] = 234,
  [SMALL_STATE(17)] = 249,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 300,
  [SMALL_STATE(21)] = 319,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 380,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 404,
  [SMALL_STATE(28)] = 414,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 436,
  [SMALL_STATE(31)] = 447,
  [SMALL_STATE(32)] = 457,
  [SMALL_STATE(33)] = 467,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 507,
  [SMALL_STATE(38)] = 517,
  [SMALL_STATE(39)] = 527,
  [SMALL_STATE(40)] = 537,
  [SMALL_STATE(41)] = 547,
  [SMALL_STATE(42)] = 557,
  [SMALL_STATE(43)] = 567,
  [SMALL_STATE(44)] = 577,
  [SMALL_STATE(45)] = 587,
  [SMALL_STATE(46)] = 597,
  [SMALL_STATE(47)] = 601,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof, 4, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_theorem, 5, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proof, 5, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 7, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proof_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_proof_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tactic, 2, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_proof_repeat1, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_coq(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
