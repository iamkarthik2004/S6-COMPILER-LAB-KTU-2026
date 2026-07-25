# Lex Program to Count Lines, Words, and Characters

## Execution Steps

```bash
flex count.l
gcc lex.yy.c -lfl
./a.out
```

### Description

* `flex count.l` – Generates the C source file (`lex.yy.c`) from the Lex program.
* `gcc lex.yy.c -lfl` – Compiles the generated C file and links the Flex library.
* `./a.out` – Executes the program.

### Program Execution

1. Enter the name of the input text file.
2. The program scans the file using Lex.
3. It counts the number of lines, words, and characters.
4. The final counts are displayed on the screen.

### Sample Output

```text
Enter the input file name: sample.txt

Number of lines: 2
Number of words: 5
Number of characters: 20
```
