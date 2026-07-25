# Experiment 2: Lexical Analyzer using Lex

## Aim

Write a program to implement a lexical analyzer for a given program using the Lex tool.

---

## Algorithm

1. Start.
2. Read the input text.
3. For each `yytext`:

   * If the token is `if`, `else`, `int`, `switch`, or `char`, print it as a **Keyword**.
   * If the token starts with a letter (`a-z`) or `_`, followed by letters, digits, or `_`, print it as an **Identifier**.
   * If the token consists of digits (`0-9`), print it as a **Number**.
   * If the token is `=`, `+`, `*`, `/`, `<`, or `>`, print it as an **Operator**.
   * If the character is a newline (`\n`), terminate the program.
4. Stop.

---

## Execution Steps

```bash
lex expt2.l
gcc lex.yy.c -lfl
./a.out
```

### Description

* `lex expt2.l` – Generates the C source file (`lex.yy.c`) from the Lex program.
* `gcc lex.yy.c -lfl` – Compiles the generated C file and links the Flex library.
* `./a.out` – Executes the lexical analyzer.

---

## Program Execution

1. Run the Lex program.
2. Enter the input program.
3. The lexical analyzer scans the input token by token.
4. It identifies and classifies keywords, identifiers, numbers, and operators.
5. The classified tokens are displayed on the screen.

---

## Result

Thus, the lexical analyzer was successfully implemented using the Lex tool to recognize keywords, identifiers, numbers, and operators from the given input program.
