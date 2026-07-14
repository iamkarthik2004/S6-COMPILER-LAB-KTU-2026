%{

#include<stdio.h>

int count = 0;

%}

 

%%

[a-zA-Z_][A-Z0-9_]*   { count++; } //valid identifier
.        ;

%%

 

int yywrap()

{

    return 1;

}

 

int main()

{

    printf("Enter input:\n");

    yylex();

    printf("Total digits = %d\n", count);

    return 0;

}
