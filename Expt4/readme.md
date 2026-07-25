# Convert `abc` to `ABC` in a Substring using Lex

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

### Program Execution

1. Enter the input string.
2. The program scans the input.
3. Every occurrence of `abc` is replaced with `ABC`.
4. The modified string is displayed as the output.

### Sample Input

```text
hello abc world
```

### Sample Output

```text
hello ABC world
```
