%option noyywrap
%x VALUE_MATCH
%{

#include "temp.cpp"

%}
LCURL "{"

RCURL "}"

COLON ":"

WHITESPACE [ \r\f\v\t\n]

KEY \"[^\"\n]+\"

UNQUOTED [^\r\f\v\t\n{},: ]+

%%
{LCURL} {curlCount++;}

{RCURL} {curlCount--;}

{WHITESPACE} {}

<<EOF>> {
    if(curlCount>0)
    {
        cout<<"Error: unmatched {";
    }
    else{
        cout<<"Valid JSON Structure";
    }
    return 0;
}

{KEY} {
    BEGIN VALUE_MATCH;
}

<VALUE_MATCH>{

{COLON} {colon=true;}
{KEY} {
    if(colon)
    {
        colon=false;
        BEGIN INITIAL;
    }
    else{
        cout<< "Error: Missing separator";
        return 1;
    }
}
{WHITESPACE} {}
{LCURL} {curlCount++; BEGIN INITIAL;}
}
{UNQUOTED} {cout<<"Error: must be a quoted string"; return 1;}
. {}
%%

int main(int argc, char *argv[])
{
    FILE *fin= fopen(argv[1], "r");
    if(!fin)
    {
        cout<<"The file can't be opened.";
        return -1;
    }
    yyin=fin;
    yylex();
    fclose(yyin);
    return 0;
}