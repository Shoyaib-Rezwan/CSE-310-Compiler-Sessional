/*
 * CSE 310 Online A2 - JSON Validator
 *
 * Grammar being validated:
 *   object -> '{' members '}'
 *   members -> pair (',' pair)*  |  <empty>
 *   pair    -> STRING ':' value
 *   value   -> STRING | object | OTHER   (OTHER = any unquoted token, e.g. a number)
 *
 * Error messages produced (only these three, as required by the spec):
 *   "must be a quoted string"  -> a key (or a completely missing value) was not a quoted string
 *   "Missing separator"        -> no ':' found between a key and its value
 *   "unmatched {"              -> braces never balance (EOF reached before '}',
 *                                  or a stray/extra '}' shows up)
 *
 * Approach: Flex tokenizes the input into simple tokens ({, }, :, comma,
 * quoted-string, and "other"). A small recursive-descent parser (which
 * naturally uses the C call stack as the brace counter/stack the hint
 * mentions) consumes those tokens with yylex() and decides validity.
 */
%option noyywrap

%{
#include <stdio.h>
#include <stdlib.h>

#define T_EOF     0
#define T_LBRACE  1
#define T_RBRACE  2
#define T_STRING  3
#define T_COLON   4
#define T_COMMA   5
#define T_OTHER   6

int cur;   /* current lookahead token */
%}

%%

[ \t\r\n]+                   ;                      /* skip whitespace */
"{"                          { return T_LBRACE; }
"}"                          { return T_RBRACE; }
":"                          { return T_COLON;  }
","                          { return T_COMMA;  }
\"[^\"\n]*\"                 { return T_STRING; }    /* properly quoted string */
[^ \t\r\n{}\":,]+            { return T_OTHER;  }    /* number / bareword / bad key etc */
.                             { return T_OTHER;  }    /* stray leftover char, e.g. lone quote */

%%


/* ---------------- recursive-descent validator ---------------- */

void advance(void) { cur = yylex(); }

void reportError(const char *msg) {
    printf("Error: %s\n", msg);
    exit(0);
}

void parseObject(void);

/* value -> STRING | object | OTHER */
void parseValue(void) {
    if (cur == T_LBRACE) {
        parseObject();
    } else if (cur == T_STRING || cur == T_OTHER) {
        advance();
    } else {
        reportError("must be a quoted string");
    }
}

/* pair -> STRING ':' value */
void parsePair(void) {
    if (cur != T_STRING) {
        reportError("must be a quoted string");
    }
    advance();                 /* consume key */

    if (cur != T_COLON) {
        reportError("Missing separator");
    }
    advance();                 /* consume ':' */

    parseValue();
}

/* object -> '{' members '}'   (cur is T_LBRACE on entry) */
void parseObject(void) {
    advance();                 /* consume '{' */

    if (cur == T_EOF) {
        reportError("unmatched {");
    }

    if (cur == T_RBRACE) {     /* empty object {} */
        advance();
        return;
    }

    parsePair();

    while (cur == T_COMMA) {
        advance();             /* consume ',' */
        if (cur == T_EOF) {
            reportError("unmatched {");
        }
        parsePair();
    }

    if (cur != T_RBRACE) {
        reportError("unmatched {");
    }
    advance();                 /* consume '}' */
}

int main(void) {
    advance();

    if (cur != T_LBRACE) {
        reportError("unmatched {");
    }

    parseObject();

    if (cur != T_EOF) {        /* extra tokens/braces after the object closed */
        reportError("unmatched {");
    }

    printf("Valid JSON Structure\n");
    return 0;
}