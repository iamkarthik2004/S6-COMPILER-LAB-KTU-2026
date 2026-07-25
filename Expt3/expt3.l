%{
#include <stdio.h>

int lines = 0;
int words = 0;
int chars = 0;

FILE *yyin;
%}

%%

[\t ]+          ;                   /* Ignore spaces and tabs */

\n              {
                    lines++;
                    chars++;
                }

[^\t \n]+       {
                    words++;
                    chars += yyleng;
                }

%%

int yywrap()
{
    return 1;
}

int main()
{
    FILE *fp;
    char filename[100];

    printf("Enter the input file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Cannot open file\n");
        return 1;
    }

    yyin = fp;

    yylex();

    printf("\nNumber of Lines      : %d\n", lines);
    printf("Number of Words      : %d\n", words);
    printf("Number of Characters : %d\n", chars);

    fclose(fp);

    return 0;
}
