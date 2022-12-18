# **More functions, more nested loops**

## **Requirements**
* All files will be compiled on Ubuntu 20.04 LTS using `gcc`
* All files should end with a new line
* A `README.md` file, at the root of the folder of the project
* Code should use the `Betty` style
* Not allowed to use global variables
* No more than 5 functions per file
* Not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* Allowed to use _putchar
* The prototypes of all functions should be included in the header file called main.h

## Compilation
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89```


## **Files**
* **0-isupper.c**:
Function that checks for uppercase character.
     - Prototype: `int _isupper(int c);`
     - Returns `1` if `c` is uppercase
     - Returns `0` otherwise
* **1-isdigit.c**:
Function that checks for a digit (`0` through `9`).
     - Prototype: `int _isdigit(int c);`
     - Returns `1` if `c` is a digit
     - Returns `0` otherwise
* **2-mul.c**:
Function that multiplies two integers.
     - Prototype: `int mul(int a, int b);`
* **3-print_numbers.c**:
Function that prints the numbers, from `0` to `9`.
     - Prototype: `void print_numbers(void);`
     - Only use `_putchar` twice in this code
* **4-print_most_numbers.c**:
Function that prints the numbers, from `0` to `9`.
     - Prototype: ` void print_most_numbers(void);`
     - Do not print `2` and `4`
     - Only use `_putchar` three times in this code
* **5-more_numbers.c**:
Function that prints 10 times the numbers, from`0` to `14`.
     - Prototype: `void more_numbers(void);`
     - Only use `_putchar` twice in your code
* **6-print_line.c**:
Function that draws a straight line in the terminal.
     - Prototype: `void print_line(int n);`
     - Only use `_putchar` function to print
     - Where `n` is the number of times the character `_` should be printed
     - The line should end with a `\n`
     - If `n` is `0` or less, the function should only print `\n`
* **7-print_diagonal.c**:
Function that draws a diagonal line on the terminal.
     - Prototype: `void print_diagonal(int n);`
     - Only use `_putchar` function to print
     - Where `n` is the number of times the character `\` should be printed
     - The line should end with a `\n`
     - If `n` is `0` or less, the function should only print `\n`
* **8-print_square.c**:
Function that prints a square.
     - Prototype: `void print_square(int size);`
     - Only use `_putchar` function to print
     - Where `size` is the size of the square
     - If `size` is `0` or less, the function should print only a new line
     - Use the character `#` to print the square
* **9-fizz_buzz.c**:
Program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.
     -  Each number or word should be separated by a space
     -  You are allowed to use the standard library
* **10-print_triangle.c**:
Function that prints a triangle.
     - Prototype: `void print_triangle(int size);`
     - Only use `_putchar` function to print
     - Where `size` is the size of the triangle
     - If `size` is `0` or less, the function should print only a new line
     - Use the character `#` to print the square
