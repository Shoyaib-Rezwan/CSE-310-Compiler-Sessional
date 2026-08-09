%option noyywrap
%{
#include <stdio.h>
#include <stdlib.h>

int braces = 0;
int state_after_str = 0;

/* Helper to print the error and terminate immediately */
void error(const char* msg) {
    printf("Error: %s\n", msg);
    exit(0);
}
%}

/* Exclusive states to enforce the JSON grammar order */
%x EXPECT_KEY EXPECT_COLON EXPECT_VALUE EXPECT_COMMA IN_STR

%%

 /* Ignore whitespace globally across all states */
<*>[ \t\r\n]+    { /* skip */ }

 /* 1. INITIAL: Waiting for the opening { */
<INITIAL>"{" {
    braces++;
    BEGIN(EXPECT_KEY);
}
<INITIAL>. { error("unmatched {"); }

 /* 2. EXPECT_KEY: Waiting for a quoted string (or closing object) */
<EXPECT_KEY>"\"" {
    state_after_str = EXPECT_COLON;
    BEGIN(IN_STR);
}
<EXPECT_KEY>"}" {
    braces--;
    if (braces < 0) error("unmatched {");
    BEGIN(EXPECT_COMMA);
}
<EXPECT_KEY>[^ \t\r\n\"{}]+ { error("must be a quoted string"); }
<EXPECT_KEY>.               { error("must be a quoted string"); }

 /* 3. EXPECT_COLON: Waiting for the separator ':' */
<EXPECT_COLON>":" {
    BEGIN(EXPECT_VALUE);
}
<EXPECT_COLON>"\""           { error("Missing separator"); }
<EXPECT_COLON>[^ \t\r\n\":]+ { error("Missing separator"); }
<EXPECT_COLON>.              { error("Missing separator"); }

 /* 4. EXPECT_VALUE: Waiting for a quoted string, nested '{', or an unquoted number */
<EXPECT_VALUE>"{" {
    braces++;
    BEGIN(EXPECT_KEY);
}
<EXPECT_VALUE>"\"" {
    state_after_str = EXPECT_COMMA;
    BEGIN(IN_STR);
}
<EXPECT_VALUE>[^ \t\r\n\"{}]+ {
    /* Consume unquoted values (e.g., 29) to match Sample 3's EOF behavior */
    BEGIN(EXPECT_COMMA);
}
<EXPECT_VALUE>. { error("must be a quoted string"); }

 /* 5. EXPECT_COMMA: Waiting for ',' to continue or '}' to close */
<EXPECT_COMMA>"," {
    BEGIN(EXPECT_KEY);
}
<EXPECT_COMMA>"}" {
    braces--;
    if (braces < 0) error("unmatched {");
    /* Remain in EXPECT_COMMA because closing a nested object resolves to a value */
}
<EXPECT_COMMA>. { error("unmatched {"); }

 /* 6. IN_STR: Handling characters inside " " */
<IN_STR>[^\"\n]* { /* consume inner string text */ }
<IN_STR>"\"" {
    BEGIN(state_after_str);
}
<IN_STR>\n { error("must be a quoted string"); }

 /* 7. End of File Validation */
<*><<EOF>> {
    if (braces != 0) {
        error("unmatched {");
    }
    printf("Valid JSON Structure\n");
    return 0;
}

%%

int main() {
    yylex();
    return 0;
}