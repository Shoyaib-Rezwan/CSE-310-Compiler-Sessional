%option noyywrap

%x CHECK_COMMAND
%{
#include<bits/stdc++.h>
using namespace std;
bool lcurlFound=false;
int curlCount=0;
%}

TEXTBF "\\textbf"
TEXTIT "\\textit"
SECTION "\\section"
OTHER "\\"[^ \n\v\r\f\t{}]+
WHITESPACE [ \n\t\v\r\f]+
LCURL "{"
RCURL "}"
%%
{TEXTBF}|{TEXTIT}|{SECTION} {
    BEGIN CHECK_COMMAND;
}
<CHECK_COMMAND>{

{WHITESPACE} {}

{LCURL} {lcurlFound=true; curlCount++;}

{RCURL} {curlCount--; lcurlFound=false; BEGIN INITIAL;}

<<EOF>> {if(curlCount>0)
    {
        cout<<"Error: unmatched {";
    }
    return 0;
}
. { if(!lcurlFound)
    {cout<<"Error: command not followed by brace block"; return 0;}}

}
{WHITESPACE} {}
{OTHER} {
    cout<<"Error: unsupported command\n";
    return 1;
}
<<EOF>> {
    cout<<"Valid LaTeX syntax\n";
    return 0;
}

. {}
%%

int main(int argc, char *argv[])
{
    FILE *fin=fopen(argv[1],"r");
    if(!fin)
    {
        cout<<"The file cannot be opened.\n";
        return 1;
    }
    yyin=fin;
    yylex();
    fclose(yyin);
}