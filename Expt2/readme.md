# Lexical Analyzer using Lex

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
