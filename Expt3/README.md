# Experiment 3: Lex Program to Count Lines, Words, and Characters

## Aim

Write a program in Lex to display the number of lines, words, and characters in an input file.

---

## Algorithm

1. Start.
2. Read the input file name.
3. Set the pointer `yyin` to the input file.
4. Read the contents of the file.
5. For each `yytext`:

   * If the character is in the range `a-z`, `A-Z`, or `0-9`, increment the character count (`c++`).
   * If the character is a space (` `) or tab (`\t`), increment the word count (`w++`).
   * If the character is a newline (`\n`), increment the line count (`l++`).
   * If the end of the file is reached, terminate the scanning process.
6. Display the values of the number of characters, words, and lines.
7. Stop.

---

## Execution Steps

```bash
flex expt3.l
gcc lex.yy.c -lfl
./a.out
```

### Description

* `flex expt3.l` – Generates the C source file (`lex.yy.c`) from the Lex program.
* `gcc lex.yy.c -lfl` – Compiles the generated C file and links the Flex library.
* `./a.out` – Executes the program.

---

## Program Execution

1. Run the executable.
2. Enter the name of the input text file.
3. The program opens the specified file.
4. Lex scans the file and counts the number of lines, words, and characters.
5. The final counts are displayed on the screen.

---

## Sample Output

```text
Enter the input file name: sample.txt

Number of lines: 2
Number of words: 5
Number of characters: 20
```

---

## Result

Thus, the Lex program was successfully implemented to count the number of lines, words, and characters in an input file.
