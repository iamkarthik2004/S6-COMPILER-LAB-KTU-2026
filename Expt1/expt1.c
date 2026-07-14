#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *keywords[] = {
    "int", "float", "char", "if", "else", "for", "while", "return"
};

int main() {
    FILE *fp;
    char ch, word[50];
    int i;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {

        /* Ignore spaces, tabs, and newlines */
        if (ch == ' ' || ch == '\n' || ch == '\t')
            continue;

        /* Ignore comments */
        if (ch == '/') {
            char next = fgetc(fp);

            /* Single-line comment */
            if (next == '/') {
                while ((ch = fgetc(fp)) != EOF && ch != '\n');
                continue;
            }

            /* Multi-line comment */
            else if (next == '*') {
                char prev = 0;
                while ((ch = fgetc(fp)) != EOF) {
                    if (prev == '*' && ch == '/')
                        break;
                    prev = ch;
                }
                continue;
            }

            /* Division operator */
            else {
                printf("/ : Operator\n");
                ungetc(next, fp);
                continue;
            }
        }

        /* Identifier or Keyword */
        if (isalpha(ch) || ch == '_') {
            i = 0;

            while (isalnum(ch) || ch == '_') {
                word[i++] = ch;
                ch = fgetc(fp);
            }

            word[i] = '\0';

            int key = 0;

            for (i = 0; i < 8; i++) {
                if (strcmp(word, keywords[i]) == 0) {
                    key = 1;
                    break;
                }
            }

            if (key)
                printf("%s : Keyword\n", word);
            else
                printf("%s : Identifier\n", word);

            ungetc(ch, fp);
        }

        /* Number */
        else if (isdigit(ch)) {
            i = 0;

            while (isdigit(ch)) {
                word[i++] = ch;
                ch = fgetc(fp);
            }

            word[i] = '\0';

            printf("%s : Number\n", word);
            ungetc(ch, fp);
        }

        /* Operators */
        else if (ch == '+' || ch == '-' || ch == '*' ||
                 ch == '=' || ch == '<' || ch == '>') {
            printf("%c : Operator\n", ch);
        }

        /* Special Symbols */
        else if (ch == '(' || ch == ')' || ch == '{' ||
                 ch == '}' || ch == ';' || ch == ',') {
            printf("%c : Special Symbol\n", ch);
        }
    }

    fclose(fp);
    return 0;
}
