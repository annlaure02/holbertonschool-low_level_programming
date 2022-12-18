# **Hello, World**

## **Requirements**
### Shell Scripts
* All scripts will be tested on Ubuntu 20.04 LTS
* All scripts should be exactly two lines long (`$ wc -l file` should print 2)
* The first line of all your files should be exactly `#!/bin/bash`
* All files must be executable

### C
* All files will be compiled on Ubuntu 20.04 LTS using gcc
* All files should end with a new line
* A README.md file, at the root of the folder of this project, containing a description of the project
* There should be no errors and no warnings during compilation
* Not allowed to use system
* Code should use the Betty style

## Compilation
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89```

## **Files**
* **0-preprocessor**:
Script that runs a C file through the preprocessor and save the result into another file.
     - The C file name will be saved in the variable $CFILE
     - The output should be saved in the file c
* **1-compiler**:
Script  that compiles a C file but does not link.
     - The C file name will be saved in the variable `$CFILE`
     - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
        * Example: if the C file is `main.c`, the output file should be `main.o`
* **2-assembler**:
Script that generates the assembly code of a C code and save it in an output file.
     - The C file name will be saved in the variable `$CFILE`
     - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
        * Example: if the C file is `main.c`, the output file should be `main.s`
* **3-name**:
Script that compiles a C file and creates an executable named `cisfun`.
     - The C file name will be saved in the variable `$CFILE`
* **4-puts.c**:
C program that prints exactly `"Programming is like building a multilingual puzzle`.
     - Use the function `puts`
     - Not allowed to use `printf`
     - Program should end with the value `0`
* **5-printf.c**:
C program that prints exactly `with proper grammar, but the outcome is a piece of art`
     - Use the function `printf`
     - Not allowed to use `puts`
     - Program should return `0`
* **6-size.c**:
C program that prints the size of various types on the computer it is compiled and run on.
