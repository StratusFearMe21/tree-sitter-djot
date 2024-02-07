#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_link_label = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_DOT = 22,
  aux_sym_class_token1 = 23,
  sym_identifier = 24,
  anon_sym_EQ = 25,
  aux_sym_key_token1 = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_value_token1 = 28,
  anon_sym_ = 29,
  anon_sym_LF_LF = 30,
  anon_sym_LF2 = 31,
  anon_sym_BSLASH = 32,
  sym_document = 33,
  sym__block = 34,
  sym__heading = 35,
  sym_heading1 = 36,
  sym_heading2 = 37,
  sym_heading3 = 38,
  sym_heading4 = 39,
  sym_heading5 = 40,
  sym_heading6 = 41,
  sym__gobble_header = 42,
  sym_blockquote = 43,
  sym_codeblock = 44,
  sym_language = 45,
  sym_code = 46,
  sym_line = 47,
  sym_thematicbreak = 48,
  sym__star_thematicbreak = 49,
  sym__end_star_thematicbreak = 50,
  sym__minus_thematicbreak = 51,
  sym__end_minus_thematicbreak = 52,
  sym_link_reference_definition = 53,
  sym_link_destination = 54,
  sym_block_attribute = 55,
  sym_class = 56,
  sym_key_value = 57,
  sym_key = 58,
  sym_value = 59,
  sym_paragraph = 60,
  sym__eof_or_blankline = 61,
  aux_sym__inline = 62,
  sym__text = 63,
  aux_sym_document_repeat1 = 64,
  aux_sym_code_repeat1 = 65,
  aux_sym_line_repeat1 = 66,
  aux_sym__end_star_thematicbreak_repeat1 = 67,
  aux_sym__end_minus_thematicbreak_repeat1 = 68,
  aux_sym_block_attribute_repeat1 = 69,
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
  [sym_link_label] = "link_label",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [aux_sym_class_token1] = "class_token1",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [aux_sym_key_token1] = "key_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_value_token1] = "value_token1",
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
  [sym_link_destination] = "link_destination",
  [sym_block_attribute] = "block_attribute",
  [sym_class] = "class",
  [sym_key_value] = "key_value",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_paragraph] = "paragraph",
  [sym__eof_or_blankline] = "_eof_or_blankline",
  [aux_sym__inline] = "_inline",
  [sym__text] = "_text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym__end_star_thematicbreak_repeat1] = "_end_star_thematicbreak_repeat1",
  [aux_sym__end_minus_thematicbreak_repeat1] = "_end_minus_thematicbreak_repeat1",
  [aux_sym_block_attribute_repeat1] = "block_attribute_repeat1",
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
  [sym_link_label] = sym_link_label,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_class_token1] = aux_sym_class_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_key_token1] = aux_sym_key_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_value_token1] = aux_sym_value_token1,
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
  [sym_link_destination] = sym_link_destination,
  [sym_block_attribute] = sym_block_attribute,
  [sym_class] = sym_class,
  [sym_key_value] = sym_key_value,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_paragraph] = sym_paragraph,
  [sym__eof_or_blankline] = sym__eof_or_blankline,
  [aux_sym__inline] = aux_sym__inline,
  [sym__text] = sym__text,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym__end_star_thematicbreak_repeat1] = aux_sym__end_star_thematicbreak_repeat1,
  [aux_sym__end_minus_thematicbreak_repeat1] = aux_sym__end_minus_thematicbreak_repeat1,
  [aux_sym_block_attribute_repeat1] = aux_sym_block_attribute_repeat1,
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
  [sym_link_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_class_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
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
  [sym_link_destination] = {
    .visible = true,
    .named = true,
  },
  [sym_block_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
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
  [aux_sym__inline] = {
    .visible = false,
    .named = false,
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
  [aux_sym_block_attribute_repeat1] = {
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
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == 0) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(75);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '`') ADVANCE(10);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '`') ADVANCE(40);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '}') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '>') ADVANCE(33);
      if (lookahead == '[') ADVANCE(41);
      if (lookahead == '`') ADVANCE(40);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_heading2_token1);
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_heading2_token1);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_heading3_token1);
      if (lookahead == '#') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_heading3_token1);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_heading4_token1);
      if (lookahead == '#') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_heading4_token1);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_heading5_token1);
      if (lookahead == '#') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_heading5_token1);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_heading6_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_heading6_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead == '`') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead == '`') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_language_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__end_star_thematicbreak_token1);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__end_minus_thematicbreak_token1);
      if (lookahead == '-') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_link_label);
      if (lookahead == ']') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_link_label);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(38);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_class_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_key_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(42);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      if (lookahead == '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 18},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
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
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [sym_link_label] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_key_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LF2] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(81),
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
    [sym__star_thematicbreak] = STATE(20),
    [sym__minus_thematicbreak] = STATE(20),
    [sym_link_reference_definition] = STATE(2),
    [sym_block_attribute] = STATE(2),
    [sym_paragraph] = STATE(2),
    [aux_sym__inline] = STATE(31),
    [sym__text] = STATE(31),
    [aux_sym_document_repeat1] = STATE(2),
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
    [sym_link_label] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [2] = {
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
    [sym__star_thematicbreak] = STATE(20),
    [sym__minus_thematicbreak] = STATE(20),
    [sym_link_reference_definition] = STATE(3),
    [sym_block_attribute] = STATE(3),
    [sym_paragraph] = STATE(3),
    [aux_sym__inline] = STATE(31),
    [sym__text] = STATE(31),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
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
    [sym_link_label] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(37),
  },
  [3] = {
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
    [sym__star_thematicbreak] = STATE(20),
    [sym__minus_thematicbreak] = STATE(20),
    [sym_link_reference_definition] = STATE(3),
    [sym_block_attribute] = STATE(3),
    [sym_paragraph] = STATE(3),
    [aux_sym__inline] = STATE(31),
    [sym__text] = STATE(31),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_POUND] = ACTIONS(43),
    [aux_sym_heading2_token1] = ACTIONS(46),
    [aux_sym_heading3_token1] = ACTIONS(49),
    [aux_sym_heading4_token1] = ACTIONS(52),
    [aux_sym_heading5_token1] = ACTIONS(55),
    [aux_sym_heading6_token1] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(61),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(64),
    [aux_sym_language_token1] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(70),
    [anon_sym_STAR_STAR] = ACTIONS(73),
    [anon_sym_STAR_STAR_STAR] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_DASH_DASH] = ACTIONS(82),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(85),
    [sym_link_label] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(96), 15,
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
  [23] = 2,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(100), 15,
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
  [46] = 2,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(104), 15,
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
  [69] = 2,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(108), 15,
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
  [92] = 2,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(112), 15,
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
  [115] = 2,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(116), 15,
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
  [138] = 2,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(120), 15,
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
  [161] = 2,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(124), 15,
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
  [184] = 2,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(128), 15,
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
  [207] = 2,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(132), 15,
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
  [230] = 2,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(136), 15,
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
  [253] = 2,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(140), 15,
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
  [276] = 2,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(144), 15,
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
  [299] = 2,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(148), 15,
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
  [322] = 2,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(152), 15,
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
  [345] = 2,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(156), 15,
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
  [368] = 2,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(160), 15,
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
  [391] = 2,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(164), 15,
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
  [414] = 2,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(168), 15,
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
  [437] = 2,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(172), 15,
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
  [460] = 2,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(176), 15,
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
  [483] = 2,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(180), 15,
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
  [506] = 2,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      sym_link_label,
      anon_sym_LBRACE,
    ACTIONS(184), 15,
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
  [529] = 6,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      aux_sym_key_token1,
    STATE(74), 1,
      sym_key,
    STATE(29), 3,
      sym_class,
      sym_key_value,
      aux_sym_block_attribute_repeat1,
  [550] = 6,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(202), 1,
      aux_sym_key_token1,
    STATE(74), 1,
      sym_key,
    STATE(28), 3,
      sym_class,
      sym_key_value,
      aux_sym_block_attribute_repeat1,
  [571] = 6,
    ACTIONS(188), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      aux_sym_key_token1,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(74), 1,
      sym_key,
    STATE(28), 3,
      sym_class,
      sym_key_value,
      aux_sym_block_attribute_repeat1,
  [592] = 5,
    ACTIONS(209), 1,
      aux_sym_language_token1,
    ACTIONS(213), 1,
      anon_sym_LF_LF,
    STATE(16), 1,
      sym__eof_or_blankline,
    ACTIONS(211), 2,
      anon_sym_,
      anon_sym_LF2,
    STATE(36), 2,
      aux_sym__inline,
      sym__text,
  [610] = 5,
    ACTIONS(209), 1,
      aux_sym_language_token1,
    ACTIONS(217), 1,
      anon_sym_LF_LF,
    STATE(17), 1,
      sym__eof_or_blankline,
    ACTIONS(215), 2,
      anon_sym_,
      anon_sym_LF2,
    STATE(36), 2,
      aux_sym__inline,
      sym__text,
  [628] = 5,
    ACTIONS(209), 1,
      aux_sym_language_token1,
    ACTIONS(221), 1,
      anon_sym_LF_LF,
    STATE(15), 1,
      sym__eof_or_blankline,
    ACTIONS(219), 2,
      anon_sym_,
      anon_sym_LF2,
    STATE(36), 2,
      aux_sym__inline,
      sym__text,
  [646] = 5,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      aux_sym_language_token1,
    STATE(62), 1,
      aux_sym_line_repeat1,
    STATE(77), 1,
      sym_code,
    STATE(35), 2,
      sym_line,
      aux_sym_code_repeat1,
  [663] = 5,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      aux_sym_language_token1,
    STATE(62), 1,
      aux_sym_line_repeat1,
    STATE(76), 1,
      sym_code,
    STATE(35), 2,
      sym_line,
      aux_sym_code_repeat1,
  [680] = 5,
    ACTIONS(223), 1,
      anon_sym_LF,
    ACTIONS(225), 1,
      aux_sym_language_token1,
    ACTIONS(227), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(62), 1,
      aux_sym_line_repeat1,
    STATE(37), 2,
      sym_line,
      aux_sym_code_repeat1,
  [697] = 4,
    ACTIONS(229), 1,
      aux_sym_language_token1,
    ACTIONS(234), 1,
      anon_sym_LF_LF,
    ACTIONS(232), 2,
      anon_sym_,
      anon_sym_LF2,
    STATE(36), 2,
      aux_sym__inline,
      sym__text,
  [712] = 5,
    ACTIONS(236), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      aux_sym_language_token1,
    STATE(62), 1,
      aux_sym_line_repeat1,
    STATE(37), 2,
      sym_line,
      aux_sym_code_repeat1,
  [729] = 1,
    ACTIONS(244), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_identifier,
      aux_sym_key_token1,
  [736] = 3,
    ACTIONS(246), 1,
      aux_sym_language_token1,
    STATE(23), 1,
      sym__gobble_header,
    STATE(30), 2,
      aux_sym__inline,
      sym__text,
  [747] = 3,
    ACTIONS(246), 1,
      aux_sym_language_token1,
    STATE(26), 1,
      sym__gobble_header,
    STATE(30), 2,
      aux_sym__inline,
      sym__text,
  [758] = 4,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(250), 1,
      aux_sym__end_minus_thematicbreak_token1,
    STATE(5), 1,
      sym__end_minus_thematicbreak,
    STATE(64), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [771] = 4,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 1,
      aux_sym__end_star_thematicbreak_token1,
    STATE(10), 1,
      sym__end_star_thematicbreak,
    STATE(57), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [784] = 1,
    ACTIONS(256), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_identifier,
      aux_sym_key_token1,
  [791] = 1,
    ACTIONS(258), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_identifier,
      aux_sym_key_token1,
  [798] = 3,
    ACTIONS(246), 1,
      aux_sym_language_token1,
    STATE(18), 1,
      sym__gobble_header,
    STATE(30), 2,
      aux_sym__inline,
      sym__text,
  [809] = 3,
    ACTIONS(246), 1,
      aux_sym_language_token1,
    STATE(24), 1,
      sym__gobble_header,
    STATE(30), 2,
      aux_sym__inline,
      sym__text,
  [820] = 3,
    ACTIONS(246), 1,
      aux_sym_language_token1,
    STATE(25), 1,
      sym__gobble_header,
    STATE(30), 2,
      aux_sym__inline,
      sym__text,
  [831] = 4,
    ACTIONS(254), 1,
      aux_sym__end_star_thematicbreak_token1,
    ACTIONS(260), 1,
      anon_sym_LF,
    STATE(21), 1,
      sym__end_star_thematicbreak,
    STATE(57), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [844] = 1,
    ACTIONS(262), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_identifier,
      aux_sym_key_token1,
  [851] = 3,
    ACTIONS(246), 1,
      aux_sym_language_token1,
    STATE(22), 1,
      sym__gobble_header,
    STATE(30), 2,
      aux_sym__inline,
      sym__text,
  [862] = 4,
    ACTIONS(250), 1,
      aux_sym__end_minus_thematicbreak_token1,
    ACTIONS(264), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym__end_minus_thematicbreak,
    STATE(64), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [875] = 4,
    ACTIONS(250), 1,
      aux_sym__end_minus_thematicbreak_token1,
    ACTIONS(266), 1,
      anon_sym_LF,
    STATE(9), 1,
      sym__end_minus_thematicbreak,
    STATE(64), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [888] = 4,
    ACTIONS(254), 1,
      aux_sym__end_star_thematicbreak_token1,
    ACTIONS(268), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym__end_star_thematicbreak,
    STATE(57), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [901] = 2,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(270), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
  [909] = 3,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(276), 1,
      aux_sym_language_token1,
    STATE(55), 1,
      aux_sym_line_repeat1,
  [919] = 2,
    ACTIONS(281), 1,
      anon_sym_LF,
    ACTIONS(279), 2,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      aux_sym_language_token1,
  [927] = 3,
    ACTIONS(283), 1,
      anon_sym_LF,
    ACTIONS(285), 1,
      aux_sym__end_star_thematicbreak_token1,
    STATE(59), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [937] = 3,
    ACTIONS(287), 1,
      anon_sym_LF,
    ACTIONS(289), 1,
      aux_sym_language_token1,
    STATE(86), 1,
      sym_language,
  [947] = 3,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      aux_sym__end_star_thematicbreak_token1,
    STATE(59), 1,
      aux_sym__end_star_thematicbreak_repeat1,
  [957] = 3,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 1,
      aux_sym__end_minus_thematicbreak_token1,
    STATE(60), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [967] = 2,
    ACTIONS(301), 1,
      aux_sym_language_token1,
    STATE(32), 2,
      aux_sym__inline,
      sym__text,
  [975] = 3,
    ACTIONS(303), 1,
      anon_sym_LF,
    ACTIONS(305), 1,
      aux_sym_language_token1,
    STATE(55), 1,
      aux_sym_line_repeat1,
  [985] = 3,
    ACTIONS(307), 1,
      aux_sym_key_token1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_value,
  [995] = 3,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      aux_sym__end_minus_thematicbreak_token1,
    STATE(60), 1,
      aux_sym__end_minus_thematicbreak_repeat1,
  [1005] = 2,
    ACTIONS(315), 1,
      anon_sym_DASH,
    ACTIONS(317), 1,
      anon_sym_DASH_DASH,
  [1012] = 2,
    ACTIONS(319), 1,
      aux_sym_language_token1,
    STATE(68), 1,
      sym_link_destination,
  [1019] = 2,
    ACTIONS(321), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_STAR_STAR,
  [1026] = 1,
    ACTIONS(325), 1,
      anon_sym_LF,
  [1030] = 1,
    ACTIONS(327), 1,
      anon_sym_EQ,
  [1034] = 1,
    ACTIONS(329), 1,
      anon_sym_LF,
  [1038] = 1,
    ACTIONS(323), 1,
      anon_sym_STAR,
  [1042] = 1,
    ACTIONS(331), 1,
      anon_sym_LF,
  [1046] = 1,
    ACTIONS(333), 1,
      aux_sym_value_token1,
  [1050] = 1,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [1054] = 1,
    ACTIONS(337), 1,
      aux_sym_class_token1,
  [1058] = 1,
    ACTIONS(339), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1062] = 1,
    ACTIONS(341), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [1066] = 1,
    ACTIONS(317), 1,
      anon_sym_DASH,
  [1070] = 1,
    ACTIONS(343), 1,
      anon_sym_LF,
  [1074] = 1,
    ACTIONS(345), 1,
      anon_sym_LF,
  [1078] = 1,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
  [1082] = 1,
    ACTIONS(349), 1,
      anon_sym_DASH,
  [1086] = 1,
    ACTIONS(351), 1,
      anon_sym_STAR,
  [1090] = 1,
    ACTIONS(353), 1,
      anon_sym_LF,
  [1094] = 1,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
  [1098] = 1,
    ACTIONS(357), 1,
      anon_sym_LF,
  [1102] = 1,
    ACTIONS(359), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 23,
  [SMALL_STATE(6)] = 46,
  [SMALL_STATE(7)] = 69,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 276,
  [SMALL_STATE(17)] = 299,
  [SMALL_STATE(18)] = 322,
  [SMALL_STATE(19)] = 345,
  [SMALL_STATE(20)] = 368,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 414,
  [SMALL_STATE(23)] = 437,
  [SMALL_STATE(24)] = 460,
  [SMALL_STATE(25)] = 483,
  [SMALL_STATE(26)] = 506,
  [SMALL_STATE(27)] = 529,
  [SMALL_STATE(28)] = 550,
  [SMALL_STATE(29)] = 571,
  [SMALL_STATE(30)] = 592,
  [SMALL_STATE(31)] = 610,
  [SMALL_STATE(32)] = 628,
  [SMALL_STATE(33)] = 646,
  [SMALL_STATE(34)] = 663,
  [SMALL_STATE(35)] = 680,
  [SMALL_STATE(36)] = 697,
  [SMALL_STATE(37)] = 712,
  [SMALL_STATE(38)] = 729,
  [SMALL_STATE(39)] = 736,
  [SMALL_STATE(40)] = 747,
  [SMALL_STATE(41)] = 758,
  [SMALL_STATE(42)] = 771,
  [SMALL_STATE(43)] = 784,
  [SMALL_STATE(44)] = 791,
  [SMALL_STATE(45)] = 798,
  [SMALL_STATE(46)] = 809,
  [SMALL_STATE(47)] = 820,
  [SMALL_STATE(48)] = 831,
  [SMALL_STATE(49)] = 844,
  [SMALL_STATE(50)] = 851,
  [SMALL_STATE(51)] = 862,
  [SMALL_STATE(52)] = 875,
  [SMALL_STATE(53)] = 888,
  [SMALL_STATE(54)] = 901,
  [SMALL_STATE(55)] = 909,
  [SMALL_STATE(56)] = 919,
  [SMALL_STATE(57)] = 927,
  [SMALL_STATE(58)] = 937,
  [SMALL_STATE(59)] = 947,
  [SMALL_STATE(60)] = 957,
  [SMALL_STATE(61)] = 967,
  [SMALL_STATE(62)] = 975,
  [SMALL_STATE(63)] = 985,
  [SMALL_STATE(64)] = 995,
  [SMALL_STATE(65)] = 1005,
  [SMALL_STATE(66)] = 1012,
  [SMALL_STATE(67)] = 1019,
  [SMALL_STATE(68)] = 1026,
  [SMALL_STATE(69)] = 1030,
  [SMALL_STATE(70)] = 1034,
  [SMALL_STATE(71)] = 1038,
  [SMALL_STATE(72)] = 1042,
  [SMALL_STATE(73)] = 1046,
  [SMALL_STATE(74)] = 1050,
  [SMALL_STATE(75)] = 1054,
  [SMALL_STATE(76)] = 1058,
  [SMALL_STATE(77)] = 1062,
  [SMALL_STATE(78)] = 1066,
  [SMALL_STATE(79)] = 1070,
  [SMALL_STATE(80)] = 1074,
  [SMALL_STATE(81)] = 1078,
  [SMALL_STATE(82)] = 1082,
  [SMALL_STATE(83)] = 1086,
  [SMALL_STATE(84)] = 1090,
  [SMALL_STATE(85)] = 1094,
  [SMALL_STATE(86)] = 1098,
  [SMALL_STATE(87)] = 1102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(78),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_attribute, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_attribute, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__minus_thematicbreak, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__minus_thematicbreak, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_codeblock, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_codeblock, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_attribute, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_attribute, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__minus_thematicbreak, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__minus_thematicbreak, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__star_thematicbreak, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__star_thematicbreak, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_reference_definition, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_reference_definition, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_minus_thematicbreak, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end_minus_thematicbreak, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__end_star_thematicbreak, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__end_star_thematicbreak, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__star_thematicbreak, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__star_thematicbreak, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__gobble_header, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__gobble_header, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading2, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading2, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__minus_thematicbreak, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__minus_thematicbreak, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_thematicbreak, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_thematicbreak, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__star_thematicbreak, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__star_thematicbreak, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading1, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading1, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading6, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading6, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading5, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading5, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading3, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading3, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading4, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading4, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_attribute_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_attribute_repeat1, 2), SHIFT_REPEAT(75),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_attribute_repeat1, 2), SHIFT_REPEAT(28),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_attribute_repeat1, 2), SHIFT_REPEAT(69),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 1),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inline, 2), SHIFT_REPEAT(36),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inline, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inline, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(54),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(55),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__end_star_thematicbreak_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__end_star_thematicbreak_repeat1, 2), SHIFT_REPEAT(59),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__end_minus_thematicbreak_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__end_minus_thematicbreak_repeat1, 2), SHIFT_REPEAT(60),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_destination, 1),
  [347] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language, 1),
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
