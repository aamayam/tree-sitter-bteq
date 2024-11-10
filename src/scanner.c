#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  COMMENT,
  NEWLINE,
};

void *tree_sitter_bteq_external_scanner_create() { return NULL; }
void tree_sitter_bteq_external_scanner_destroy(void *p) {}
void tree_sitter_bteq_external_scanner_reset(void *p) {}
unsigned tree_sitter_bteq_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_bteq_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool scan_comment(TSLexer *lexer) {
    // Consumimos los dos slashes iniciales
    if (lexer->lookahead != '/') return false;
    advance(lexer);
    if (lexer->lookahead != '/') return false;
    advance(lexer);

    // Consumimos el resto de la línea
    while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
        advance(lexer);
    }

    lexer->result_symbol = COMMENT;
    return true;
}

static bool scan_newline(TSLexer *lexer) {
    if (lexer->lookahead == '\n') {
        advance(lexer);
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
            skip(lexer);
        }
        lexer->result_symbol = NEWLINE;
        return true;
    }
    return false;
}

bool tree_sitter_bteq_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    // Saltamos espacios en blanco
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r') {
        skip(lexer);
    }

    if (valid_symbols[COMMENT] && scan_comment(lexer)) return true;
    if (valid_symbols[NEWLINE] && scan_newline(lexer)) return true;

    return false;
}