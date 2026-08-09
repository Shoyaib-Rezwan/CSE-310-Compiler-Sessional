%option noyywrap
%{
#include<bits/stdc++.h>
using namespace std;
stack<string> stk;
%}

WHITESPACE [ \n\t\v\r\f]
HTML_OPEN "<html>"
HEAD_OPEN "<head>"
BODY_OPEN "<body>"
P_OPEN "<p>"
HTML_CLOSE "</html>"
HEAD_CLOSE "</head>"
BODY_CLOSE "</body>"
P_CLOSE "</p>"
%%
{WHITESPACE} {}
{HTML_OPEN}|{HEAD_OPEN}|{BODY_OPEN}|{P_OPEN} {stk.push(yytext);}
{HTML_CLOSE} {
    if(stk.empty() || stk.top()!="<html>")
    {
        cout<<"Invalid HTML: tag mismatch "<<yytext;
        return 0;
    }
    stk.pop();
}
{HEAD_CLOSE} {
    if(stk.empty() || stk.top()!="<head>")
    {
        cout<<"Invalid HTML: tag mismatch "<<yytext;
        return 0;
    }
    stk.pop();
}
{P_CLOSE} {
    if(stk.empty() || stk.top()!="<p>")
    {
        cout<<"Invalid HTML: tag mismatch "<<yytext;
        return 0;
    }
    stk.pop();
}
{BODY_CLOSE} {
    if(stk.empty() || stk.top()!="<body>")
    {
        cout<<"Invalid HTML: tag mismatch "<<yytext;
        return 0;
    }
    stk.pop();
}
. {}
<<EOF>> {
    if(stk.empty())
    {
        cout<<"Valid HTML structure";
    }
    while(!stk.empty())
    {
        cout<<"Invalid HTML: missing closing tag for "<<stk.top()<<"\n";
        stk.pop();
    }
    return 0;
}
%%

int main(int argc, char* argv[])
{
    FILE *fin= fopen(argv[1], "r");
    if(!fin)
    {
        cout<<"The file is not found\n";
        return 1;
    }
    yyin = fin;
    yylex();
    return 0;
}