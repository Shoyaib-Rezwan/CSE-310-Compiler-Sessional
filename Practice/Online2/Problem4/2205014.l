%option noyywrap
%{
#include<bits/stdc++.h>
using namespace std;
int lineCount=1;
int leftStar=0;
int rightStar=0;
int leftCurr=0;
int rightCurr=0;
bool inLeft=true;
int Plus=1;
int plusCurr=0;
%}
STAR "*"
PLUS "+"
WHITESPACE [ \n\t\r\f\v]
%%

{STAR} {
    if(inLeft)
    {
        if(lineCount==1)
        {
            leftStar++;
        }
        leftCurr++;
    }
    else{
        if(lineCount==1)
        {
            rightStar++;
        }
        rightCurr++;
    }
}
{PLUS} {
    inLeft=false;
    plusCurr++;
}

\n {
    if(plusCurr!=Plus)
    {
        cout<<"Error at line "<<lineCount<<": Number of pluses incorrect";
        return 0;
    }
    if(leftCurr!=rightCurr)
    {
        cout<<"Error at line "<<lineCount<<": Stars on left and right not equal";
        return 0;
    }
    lineCount++;
    leftStar--;
    rightStar--;
    leftCurr=0;
    rightCurr=0;
    Plus+=2;
    plusCurr=0;
    inLeft=true;
}

{WHITESPACE} {}

<<EOF>> {
    if(leftStar>0)
    {
        cout<<"Error at line "<<lineCount<<": Unexpected end of file; incomplete pyramid";
    }
    else if(leftCurr>0)
    {
        
    }
    else{
        cout<<"Pattern matched successfully!";
    }
    return 0;
}
. {cout<<"Error at line "<<lineCount<<": Invalid character format\n"; return 0;}
%%

int main(int argc, char *argv[])
{
    FILE *fin=fopen(argv[1], "r");
    if(!fin)
    {
        cout<<"The file cannot be opened\n";
        return 1;
    }
    yyin=fin;
    yylex();
    fclose(yyin);
    return 0;
}