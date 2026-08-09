%option noyywrap
%x HANDLE_VECTOR

%{
#include<bits/stdc++.h>
using namespace std;
int langleCnt=0;
bool langleFound=false;
bool error=false;
string curr_str="";
%}
VECTOR "vector"
LANGLE "<"
RANGLE ">"
DTYPE "int"|"float"|"double"|"char"
WHITESPACE [ \t\r\v\f]+

%%
{WHITESPACE} {}
{VECTOR} {
    curr_str="vector";
    BEGIN HANDLE_VECTOR;
}
<HANDLE_VECTOR>{
{WHITESPACE} {}
{LANGLE} {
    if(!langleFound)
    langleFound=true;
    else
    error=true;
    curr_str+=yytext;
}
{DTYPE} {
    if(!langleFound)
    error=true;
    curr_str+=yytext;
}
{VECTOR} {
    langleFound=false;
    BEGIN HANDLE_VECTOR;
}
{RANGLE}{
    
}
}
%%
int main(int argc, char *argv[])
{
    FILE *fin=fopen(argv[1], "r");
    if(!fin)
    {
        cout<<"The file cannot be opened\n";
        return 0;
    }
    yyin=fin;
    yylex();
    fclose(yyin);
    return 0;
}
