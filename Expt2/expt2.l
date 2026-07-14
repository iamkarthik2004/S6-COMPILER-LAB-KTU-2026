%{
#include <stdio.h>
%}

%%
if|else|int|switch|char|return|main { printf("%s --> Keyword\n", yytext); }

[a-zA-Z_][a-zA-Z0-9_]* { printf("%s --> Identifier\n", yytext); }

[0-9]+ { printf("%s --> Number\n", yytext); }

"="|"+"|"*"|"/"|"<"|">" { printf("%s --> Operator\n", yytext); }

\n { return 0; }

[;] { printf("%s --> Delimiter \n", yytext); }

[ \t]+ ;

. { printf("%s --> Invalid Token\n", yytext); }
%%

int yywrap()
{
return 1;
}

int main()
{
printf("Enter input:\n");
yylex();
return 0;
}
