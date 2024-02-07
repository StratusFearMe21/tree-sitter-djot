#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_POUND = 1,
  aux_sym_heading2_token1 = 2,
  aux_sym_heading3_token1 = 3,
  aux_sym_heading4_token1 = 4,
  aux_sym_heading5_token1 = 5,
  aux_sym_heading6_token1 = 6,
  anon_sym_GT = 7,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 8,
  anon_sym_LF = 9,
  aux_sym_language_token1 = 10,
  anon_sym_STAR = 11,
  anon_sym_STAR_STAR = 12,
  anon_sym_STAR_STAR_STAR = 13,
  aux_sym__end_star_thematicbreak_token1 = 14,
  anon_sym_DASH = 15,
  anon_sym_DASH_DASH = 16,
  anon_sym_DASH_DASH_DASH = 17,
  aux_sym__end_minus_thematicbreak_token1 = 18,
  anon_sym_LBRACK = 19,
  anon_sym_ = 20,
  anon_sym_LF_LF = 21,
  anon_sym_LF2 = 22,
  anon_sym_BSLASH = 23,
  sym_document = 24,
  sym__block = 25,
  sym__heading = 26,
  sym_heading1 = 27,
  sym_heading2 = 28,
  sym_heading3 = 29,
  sym_heading4 = 30,
  sym_heading5 = 31,
  sym_heading6 = 32,
  sym__gobble_header = 33,
  sym_blockquote = 34,
  sym_codeblock = 35,
  sym_language = 36,
  sym_code = 37,
  sym_line = 38,
  sym_thematicbreak = 39,
  sym__star_thematicbreak = 40,
  sym__end_star_thematicbreak = 41,
  sym__minus_thematicbreak = 42,
  sym__end_minus_thematicbreak = 43,
  sym_link_reference_definition = 44,
  sym_link_label = 45,
  sym_link_destination = 46,
  sym_paragraph = 47,
  sym__eof_or_blankline = 48,
  sym__inline = 49,
  sym__text = 50,
  aux_sym_document_repeat1 = 51,
  aux_sym_code_repeat1 = 52,
  aux_sym_line_repeat1 = 53,
  aux_sym__end_star_thematicbreak_repeat1 = 54,
  aux_sym__end_minus_thematicbreak_repeat1 = 55,
  aux_sym__inline_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND] = "#",
  [aux_sym_heading2_token1] = "heading2_token1",
  [aux_sym_heading3_token1] = "heading3_token1",
  [aux_sym_heading4_token1] = "heading4_token1",
  [aux_sym_heading5_token1] = "heading5_token1",
  [aux_sym_heading6_token1] = "heading6_token1",
  [anon_sym_GT] = ">",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_LF] = "\n",
  [aux_sym_language_token1] = "language_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR_STAR_STAR] = "***",
  [aux_sym__end_star_thematicbreak_token1] = "_end_star_thematicbreak_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH_DASH_DASH] = "---",
  [aux_sym__end_minus_thematicbreak_token1] = "_end_minus_thematicbreak_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_] = " ",
  [anon_sym_LF_LF] = "\n\n",
  [anon_sym_LF2] = "\n ",
  [anon_sym_BSLASH] = "\\",
  [sym_document] = "document",
  [sym__block] = "_block",
  [sym__heading] = "_heading",
  [sym_heading1] = "heading1",
  [sym_heading2] = "heading2",
  [sym_heading3] = "heading3",
  [sym_heading4] = "heading4",
  [sym_heading5] = "heading5",
  [sym_heading6] = "heading6",
  [sym__gobble_header] = "_gobble_header",
  [sym_blockquote] = "blockquote",
  [sym_codeblock] = "codeblock",
  [sym_language] = "language",
  [sym_code] = "code",
  [sym_line] = "line",
  [sym_thematicbreak] = "thematicbreak",
  [sym__star_thematicbreak] = "_star_thematicbreak",
  [sym__end_star_thematicbreak] = "_end_star_thematicbreak",
  [sym__minus_thematicbreak] = "_minus_thematicbreak",
  [sym__end_minus_thematicbreak] = "_end_minus_thematicbreak",
  [sym_link_reference_definition] = "link_reference_definition",
  [sym_link_label] = "link_label",
  [sym_link_destination] = "link_destination",
  [sym_paragraph] = "paragraph",
  [sym__eof_or_blankline] = "_eof_or_blankline",
  [sym__inline] = "_inline",
  [sym__text] = "_text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym__end_star_thematicbreak_repeat1] = "_end_star_thematicbreak_repeat1",
  [aux_sym__end_minus_thematicbreak_repeat1] = "_end_minus_thematicbreak_repeat1",
  [aux_sym__inline_repeat1] = "_inline_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_heading2_token1] = aux_sym_heading2_token1,
  [aux_sym_heading3_token1] = aux_sym_heading3_token1,
  [aux_sym_heading4_token1] = aux_sym_heading4_token1,
  [aux_sym_heading5_token1] = aux_sym_heading5_token1,
  [aux_sym_heading6_token1] = aux_sym_heading6_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_language_token1] = aux_sym_language_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR_STAR_STAR] = anon_sym_STAR_STAR_STAR,
  [aux_sym__end_star_thematicbreak_token1] = aux_sym__end_star_thematicbreak_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [aux_sym__end_minus_thematicbreak_token1] = aux_sym__end_minus_thematicbreak_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_] = anon_sym_,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [anon_sym_LF2] = anon_sym_LF2,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_document] = sym_document,
  [sym__block] = sym__block,
  [sym__heading] = sym__heading,
  [sym_heading1] = sym_heading1,
  [sym_heading2] = sym_heading2,
  [sym_heading3] = sym_heading3,
  [sym_heading4] = sym_heading4,
  [sym_heading5] = sym_heading5,
  [sym_heading6] = sym_heading6,
  [sym__gobble_header] = sym__gobble_header,
  [sym_blockquote] = sym_blockquote,
  [sym_codeblock] = sym_codeblock,
  [sym_language] = sym_language,
  [sym_code] = sym_code,
  [sym_line] = sym_line,
  [sym_thematicbreak] = sym_thematicbreak,
  [sym__star_thematicbreak] = sym__star_thematicbreak,
  [sym__end_star_thematicbreak] = sym__end_star_thematicbreak,
  [sym__minus_thematicbreak] = sym__minus_thematicbreak,
  [sym__end_minus_thematicbreak] = sym__end_minus_thematicbreak,
  [sym_link_reference_definition] = sym_link_reference_definition,
  [sym_link_label] = sym_link_label,
  [sym_link_destination] = sym_link_destination,
  [sym_paragraph] = sym_paragraph,
  [sym__eof_or_blankline] = sym__eof_or_blankline,
  [sym__inline] = sym__inline,
  [sym__text] = sym__text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym__end_star_thematicbreak_repeat1] = aux_sym__end_star_thematicbreak_repeat1,
  [aux_sym__end_minus_thematicbreak_repeat1] = aux_sym__end_minus_thematicbreak_repeat1,
  [aux_sym__inline_repeat1] = aux_sym__inline_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_heading2_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading3_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading4_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading5_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading6_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_language_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__end_star_thematicbreak_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__end_minus_thematicbreak_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__heading] = {
    .visible = false,
    .named = true,
  },
  [sym_heading1] = {
    .visible = true,
    .named = true,
  },
  [sym_heading2] = {
    .visible = true,
    .named = true,
  },
  [sym_heading3] = {
    .visible = true,
    .named = true,
  },
  [sym_heading4] = {
    .visible = true,
    .named = true,
  },
  [sym_heading5] = {
    .visible = true,
    .named = true,
  },
  [sym_heading6] = {
    .visible = true,
    .named = true,
  },
  [sym__gobble_header] = {
    .visible = false,
    .named = true,
  },
  [sym_blockquote] = {
    .visible = true,
    .named = true,
  },
  [sym_codeblock] = {
    .visible = true,
    .named = true,
  },
  [sym_language] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_thematicbreak] = {
    .visible = true,
    .named = true,
  },
  [sym__star_thematicbreak] = {
    .visible = false,
    .named = true,
  },
  [sym__end_star_thematicbreak] = {
    .visible = false,
    .named = true,
  },
  [sym__minus_thematicbreak] = {
    .visible = false,
    .named = true,
  },
  [sym__end_minus_thematicbreak] = {
    .visible = false,
    .named = true,
  },
  [sym_link_reference_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_link_label] = {
    .visible = true,
    .named = true,
  },
  [sym_link_destination] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__eof_or_blankline] = {
    .visible = false,
    .named = true,
  },
  [sym__inline] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_star_thematicbreak_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__end_minus_thematicbreak_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__inline_repeat1] = {
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
  [20] = 20,
  [21] = 21,
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == 0) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(45);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '`') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '`') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '[') ADVANCE(43);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_heading2_token1);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_heading3_token1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_heading4_token1);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_heading5_token1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_heading6_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead == '`') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__end_star_thematicbreak_token1);
      if (lookahead == '*') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__end_minus_thematicbreak_token1);
      if (lookahead == '-') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 13},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 13},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_heading2_token1] = ACTIONS(1),
    [aux_sym_heading3_token1] = ACTIONS(1),
    [aux_sym_heading4_token1] = ACTIONS(1),
    [aux_sym_heading5_token1] = ACTIONS(1),
    [aux_sym_heading6_token1] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [aux_sym_language_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LF2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(65),
    [sym__block] = STATE(3),
    [sym__heading] = STATE(3),
    [sym_heading1] = STATE(3),
    [sym_heading2] = STATE(3),
    [sym_heading3] = STATE(3),
    [sym_heading4] = STATE(3),
    [sym_heading5] = STATE(3),
    [sym_heading6] = STATE(3),
    [sym_blockquote] = STATE(3),
    [sym_codeblock] = STATE(3),
    [sym_thematicbreak] = STATE(3),
    [sym__star_thematicbreak] = STATE(4),
    [sym__minus_thematicbreak] = STATE(4),
    [sym_link_reference_definition] = STATE(3),
    [sym_paragraph] = STATE(3),
    [sym__inline] = STATE(37),
    [sym__text] = STATE(25),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym__inline_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_heading2_token1] = ACTIONS(7),
    [aux_sym_heading3_token1] = ACTIONS(9),
    [aux_sym_heading4_token1] = ACTIONS(11),
    [aux_sym_heading5_token1] = ACTIONS(13),
    [aux_sym_heading6_token1] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(19),
    [aux_sym_language_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(25),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_DASH] = ACTIONS(31),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
  },
  [2] = {
    [sym__block] = STATE(2),
    [sym__heading] = STATE(2),
    [sym_heading1] = STATE(2),
    [sym_heading2] = STATE(2),
    [sym_heading3] = STATE(2),
    [sym_heading4] = STATE(2),
    [sym_heading5] = STATE(2),
    [sym_heading6] = STATE(2),
    [sym_blockquote] = STATE(2),
    [sym_codeblock] = STATE(2),
    [sym_thematicbreak] = STATE(2),
    [sym__star_thematicbreak] = STATE(4),
    [sym__minus_thematicbreak] = STATE(4),
    [sym_link_reference_definition] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline] = STATE(37),
    [sym__text] = STATE(25),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym__inline_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(39),
    [aux_sym_heading2_token1] = ACTIONS(42),
    [aux_sym_heading3_token1] = ACTIONS(45),
    [aux_sym_heading4_token1] = ACTIONS(48),
    [aux_sym_heading5_token1] = ACTIONS(51),
    [aux_sym_heading6_token1] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(57),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(60),
    [aux_sym_language_token1] = ACTIONS(63),
    [anon_sym_STAR] = ACTIONS(66),
    [anon_sym_STAR_STAR] = ACTIONS(69),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_DASH_DASH] = ACTIONS(78),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(84),
  },
  [3] = {
    [sym__block] = STATE(2),
    [sym__heading] = STATE(2),
    [sym_heading1] = STATE(2),
    [sym_heading2] = STATE(2),
    [sym_heading3] = STATE(2),
    [sym_heading4] = STATE(2),
    [sym_heading5] = STATE(2),
    [sym_heading6] = STATE(2),
    [sym_blockquote] = STATE(2),
    [sym_codeblock] = STATE(2),
    [sym_thematicbreak] = STATE(2),
    [sym__star_thematicbreak] = STATE(4),
    [sym__minus_thematicbreak] = STATE(4),
    [sym_link_reference_definition] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__inline] = STATE(37),
    [sym__text] = STATE(25),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym__inline_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(5),
    [aux_sym_heading2_token1] = ACTIONS(7),
    [aux_sym_heading3_token1] = ACTIONS(9),
    [aux_sym_heading4_token1] = ACTIONS(11),
    [aux_sym_heading5_token1] = ACTIONS(13),
    [aux_sym_heading6_token1] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(17),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(19),
    [aux_sym_language_token1] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_STAR_STAR] = ACTIONS(25),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(29),
    [anon_sym_DASH_DASH] = ACTIONS(31),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [22] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [44] = 2,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [66] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [88] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [110] = 2,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [132] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [154] = 2,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [176] = 2,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [198] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [220] = 2,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [242] = 2,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [264] = 2,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [286] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [308] = 2,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [330] = 2,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [352] = 2,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [374] = 2,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [396] = 2,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [418] = 2,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [440] = 2,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 16,
      anon_sym_POUND,
      aux_sym_heading2_token1,
      aux_sym_heading3_token1,
      aux_sym_heading4_token1,
      aux_sym_heading5_token1,
      aux_sym_heading6_token1,
      anon_sym_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
      anon_sym_STAR,
      anon_sym_STAR_STAR,
      anon_sym_STAR_STAR_STAR,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_DASH,
      anon_sym_LBRACK,
  [462] = 4,
    ACTIONS(173), 1,
      aux_sym_language_token1,
    ACTIONS(177), 1,
      anon_sym_LF_LF,
    ACTIONS(175), 2,
      anon_sym_,
      anon_sym_LF2,
    STATE(29), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [477] = 5,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      aux_sym_language_token1,
    STATE(50), 1,
      aux_sym_line_repeat1,
    STATE(67), 1,
      sym_code,
    STATE(27), 2,
      sym_line,
      aux_sym_code_repeat1,
  [494] = 5,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      aux_sym_language_token1,
    ACTIONS(183), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(50), 1,
      aux_sym_line_repeat1,
    STATE(30), 2,
      sym_line,
      aux_sym_code_repeat1,
  [511] = 5,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      aux_sym_language_token1,
    STATE(50), 1,
      aux_sym_line_repeat1,
    STATE(68), 1,
      sym_code,
    STATE(27), 2,
      sym_line,
      aux_sym_code_repeat1,
  [528] = 4,
    ACTIONS(185), 1,
      aux_sym_language_token1,
    ACTIONS(190), 1,
      anon_sym_LF_LF,
    ACTIONS(188), 2,
      anon_sym_,
      anon_sym_LF2,
    STATE(29), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [543] = 5,
    ACTIONS(192), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(197), 1,
      aux_sym_language_token1,
    STATE(50), 1,
      aux_sym_line_repeat1,
    STATE(30), 2,
      sym_line,
      aux_sym_code_repeat1,
  [560] = 4,
    ACTIONS(200), 1,
      aux_sym_language_token1,
    STATE(24), 1,
      sym__gobble_header,
    STATE(42), 1,
      sym__inline,
    STATE(25), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [574] = 4,
    ACTIONS(200), 1,
      aux_sym_language_token1,
    STATE(5), 1,
      sym__gobble_header,
    STATE(42), 1,
      sym__inline,
    STATE(25), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [588] = 4,
    ACTIONS(200), 1,
      aux_sym_language_token1,
    STATE(23), 1,
      sym__gobble_header,
    STATE(42), 1,
      sym__inline,
    STATE(25), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [602] = 4,
    ACTIONS(200), 1,
      aux_sym_language_token1,
    STATE(21), 1,
      sym__gobble_header,
    STATE(42), 1,
      sym__inline,
    STATE(25), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [616] = 4,
    ACTIONS(200), 1,
      aux_sym_language_token1,
    STATE(22), 1,
      sym__gobble_header,
    STATE(42), 1,
      sym__inline,
    STATE(25), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [630] = 4,
    ACTIONS(200), 1,
      aux_sym_language_token1,
    STATE(20), 1,
      sym__gobble_header,
    STATE(42), 1,
      sym__inline,
    STATE(25), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [644] = 3,
    ACTIONS(204), 1,
      anon_sym_LF_LF,
    STATE(6), 1,
      sym__eof_or_blankline,
    ACTIONS(202), 2,
      anon_sym_,
      anon_sym_LF2,
  [655] = 4,
    ACTIONS(206), 1,
      anon_sym_LF,
    ACTIONS(208), 1,
      aux_sym__end_star_thematicbreak_token1,
    STATE(11), 1,
      sym__end_star_thematicbreak,
    STATE(51), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [668] = 4,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 1,
      aux_sym__end_minus_thematicbreak_token1,
    STATE(15), 1,
      sym__end_minus_thematicbreak,
    STATE(55), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [681] = 4,
    ACTIONS(212), 1,
      aux_sym__end_minus_thematicbreak_token1,
    ACTIONS(214), 1,
      anon_sym_LF,
    STATE(18), 1,
      sym__end_minus_thematicbreak,
    STATE(55), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [694] = 4,
    ACTIONS(212), 1,
      aux_sym__end_minus_thematicbreak_token1,
    ACTIONS(216), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__end_minus_thematicbreak,
    STATE(55), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [707] = 3,
    ACTIONS(220), 1,
      anon_sym_LF_LF,
    STATE(12), 1,
      sym__eof_or_blankline,
    ACTIONS(218), 2,
      anon_sym_,
      anon_sym_LF2,
  [718] = 3,
    ACTIONS(200), 1,
      aux_sym_language_token1,
    STATE(44), 1,
      sym__inline,
    STATE(25), 2,
      sym__text,
      aux_sym__inline_repeat1,
  [729] = 3,
    ACTIONS(224), 1,
      anon_sym_LF_LF,
    STATE(19), 1,
      sym__eof_or_blankline,
    ACTIONS(222), 2,
      anon_sym_,
      anon_sym_LF2,
  [740] = 4,
    ACTIONS(208), 1,
      aux_sym__end_star_thematicbreak_token1,
    ACTIONS(226), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym__end_star_thematicbreak,
    STATE(51), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [753] = 4,
    ACTIONS(208), 1,
      aux_sym__end_star_thematicbreak_token1,
    ACTIONS(228), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym__end_star_thematicbreak,
    STATE(51), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [766] = 2,
    ACTIONS(232), 1,
      anon_sym_LF,
    ACTIONS(230), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
  [774] = 3,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 1,
      aux_sym_language_token1,
    STATE(48), 1,
      aux_sym_line_repeat1,
  [784] = 2,
    ACTIONS(241), 1,
      anon_sym_LF,
    ACTIONS(239), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
  [792] = 3,
    ACTIONS(243), 1,
      anon_sym_LF,
    ACTIONS(245), 1,
      aux_sym_language_token1,
    STATE(48), 1,
      aux_sym_line_repeat1,
  [802] = 3,
    ACTIONS(247), 1,
      anon_sym_LF,
    ACTIONS(249), 1,
      aux_sym__end_star_thematicbreak_token1,
    STATE(53), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [812] = 3,
    ACTIONS(251), 1,
      anon_sym_LF,
    ACTIONS(253), 1,
      aux_sym__end_minus_thematicbreak_token1,
    STATE(52), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [822] = 3,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      aux_sym__end_star_thematicbreak_token1,
    STATE(53), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [832] = 3,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(263), 1,
      aux_sym_language_token1,
    STATE(70), 1,
      sym_language,
  [842] = 3,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      aux_sym__end_minus_thematicbreak_token1,
    STATE(52), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [852] = 2,
    ACTIONS(269), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_STAR_STAR,
  [859] = 2,
    ACTIONS(273), 1,
      aux_sym_language_token1,
    STATE(62), 1,
      sym_link_destination,
  [866] = 2,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      anon_sym_DASH_DASH,
  [873] = 2,
    ACTIONS(279), 1,
      aux_sym_language_token1,
    STATE(57), 1,
      sym_link_label,
  [880] = 1,
    ACTIONS(281), 1,
      anon_sym_STAR,
  [884] = 1,
    ACTIONS(283), 1,
      anon_sym_LF,
  [888] = 1,
    ACTIONS(285), 1,
      anon_sym_LF,
  [892] = 1,
    ACTIONS(277), 1,
      anon_sym_DASH,
  [896] = 1,
    ACTIONS(287), 1,
      aux_sym_language_token1,
  [900] = 1,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
  [904] = 1,
    ACTIONS(291), 1,
      anon_sym_LF,
  [908] = 1,
    ACTIONS(293), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [912] = 1,
    ACTIONS(295), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [916] = 1,
    ACTIONS(271), 1,
      anon_sym_STAR,
  [920] = 1,
    ACTIONS(297), 1,
      anon_sym_LF,
  [924] = 1,
    ACTIONS(299), 1,
      anon_sym_DASH,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 308,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 352,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 396,
  [SMALL_STATE(23)] = 418,
  [SMALL_STATE(24)] = 440,
  [SMALL_STATE(25)] = 462,
  [SMALL_STATE(26)] = 477,
  [SMALL_STATE(27)] = 494,
  [SMALL_STATE(28)] = 511,
  [SMALL_STATE(29)] = 528,
  [SMALL_STATE(30)] = 543,
  [SMALL_STATE(31)] = 560,
  [SMALL_STATE(32)] = 574,
  [SMALL_STATE(33)] = 588,
  [SMALL_STATE(34)] = 602,
  [SMALL_STATE(35)] = 616,
  [SMALL_STATE(36)] = 630,
  [SMALL_STATE(37)] = 644,
  [SMALL_STATE(38)] = 655,
  [SMALL_STATE(39)] = 668,
  [SMALL_STATE(40)] = 681,
  [SMALL_STATE(41)] = 694,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 718,
  [SMALL_STATE(44)] = 729,
  [SMALL_STATE(45)] = 740,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 766,
  [SMALL_STATE(48)] = 774,
  [SMALL_STATE(49)] = 784,
  [SMALL_STATE(50)] = 792,
  [SMALL_STATE(51)] = 802,
  [SMALL_STATE(52)] = 812,
  [SMALL_STATE(53)] = 822,
  [SMALL_STATE(54)] = 832,
  [SMALL_STATE(55)] = 842,
  [SMALL_STATE(56)] = 852,
  [SMALL_STATE(57)] = 859,
  [SMALL_STATE(58)] = 866,
  [SMALL_STATE(59)] = 873,
  [SMALL_STATE(60)] = 880,
  [SMALL_STATE(61)] = 884,
  [SMALL_STATE(62)] = 888,
  [SMALL_STATE(63)] = 892,
  [SMALL_STATE(64)] = 896,
  [SMALL_STATE(65)] = 900,
  [SMALL_STATE(66)] = 904,
  [SMALL_STATE(67)] = 908,
  [SMALL_STATE(68)] = 912,
  [SMALL_STATE(69)] = 916,
  [SMALL_STATE(70)] = 920,
  [SMALL_STATE(71)] = 924,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thematicbreak, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thematicbreak, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading5, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading5, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__star_thematicbreak, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__star_thematicbreak, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_reference_definition, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_reference_definition, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__minus_thematicbreak, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__minus_thematicbreak, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__star_thematicbreak, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__star_thematicbreak, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gobble_header, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gobble_header, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_minus_thematicbreak, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end_minus_thematicbreak, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__minus_thematicbreak, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__minus_thematicbreak, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_star_thematicbreak, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end_star_thematicbreak, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__star_thematicbreak, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__star_thematicbreak, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__minus_thematicbreak, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__minus_thematicbreak, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading6, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading6, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading2, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading2, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading3, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading3, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading4, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading4, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2), SHIFT_REPEAT(29),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(47),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(50),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(48),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__end_minus_thematicbreak_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__end_minus_thematicbreak_repeat1, 2), SHIFT_REPEAT(52),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__end_star_thematicbreak_repeat1, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__end_star_thematicbreak_repeat1, 2), SHIFT_REPEAT(53),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_destination, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_label, 1),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Djot(void) {
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
