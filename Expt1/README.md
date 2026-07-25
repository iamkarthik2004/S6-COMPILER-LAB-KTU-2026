# Experiment 1: Lexical Analyzer using Lex

## Aim

Design and implement a lexical analyzer using Lex to recognize all valid tokens in the input program. The lexical analyzer should ignore redundant spaces, tabs, newlines, and comments.

---

## Algorithm

1. Start.
2. Read the input program from a text file.
3. Scan the input character by character.
4. If the token is a keyword, print it as **Keyword**.
5. If the token is an identifier, print it as **Identifier**.
6. If the token is an operator, print it as **Operator**.
7. If the token is a number, print it as **Number**.
8. If the token is a special symbol, print it as **Special Symbol**.
9. Ignore redundant spaces, tabs, newlines, and comments.
10. Repeat until the end of the file.
11. Stop.

---

## Execution Steps

```bash
lex expt1.l
gcc lex.yy.c -lfl
./a.out
```

### Description

* `lex expt1.l` – Generates the C source file (`lex.yy.c`) from the Lex program.
* `gcc lex.yy.c -lfl` – Compiles the generated C file and links the Flex library.
* `./a.out` – Executes the lexical analyzer.

---

## Program Execution

1. Create an input text file (e.g., `input.txt`) containing the source program.
2. Run the executable.
3. Enter the input file name when prompted.
4. The lexical analyzer reads the file and classifies each token.
5. The identified tokens are displayed on the screen.

---

## Sample Input (`input.txt`)

```c
int main() {
    int a = 10;
}
```

---

## Sample Output

```text
Enter the input file name: input.txt

int  : keyword
main : identifier
(    : special symbol
)    : special symbol
{    : special symbol
int  : keyword
a    : identifier
=    : operator
10   : number
;    : special symbol
}    : special symbol
```

---

## Result

Thus, the lexical analyzer was successfully implemented using Lex to recognize keywords, identifiers, operators, numbers, and special symbols from a source program stored in a text file.
