# Experiment 4: Convert `abc` to `ABC` in a Substring using Lex

## Aim

Write a program in Lex to convert `abc` to `ABC` from a string.

---

## Algorithm

1. Start.
2. Read the input string.
3. Initialize a string to store the result.
4. For each `yytext`:

   * If the matched text is equal to `abc`, replace it with `ABC`.
   * Otherwise, display the character(s) as they are.
5. Stop.

---

## Execution Steps

```bash
lex expt4.l
gcc lex.yy.c -lfl
./a.out
```

### Description

* `lex expt4.l` – Generates the C source file (`lex.yy.c`) from the Lex program.
* `gcc lex.yy.c -lfl` – Compiles the generated C file and links the Flex library.
* `./a.out` – Executes the program.

---

## Program Execution

1. Run the executable.
2. Enter the input string.
3. The program scans the input using Lex.
4. Every occurrence of `abc` is replaced with `ABC`.
5. All other characters are displayed unchanged.
6. The modified string is printed on the screen.

---

## Sample Input

```text
hello abc world
```

---

## Sample Output

```text
Enter the input:
hello abc world
hello ABC world
```

---

## Result

Thus, the Lex program was successfully implemented to replace every occurrence of `abc` with `ABC` in the given input string.
