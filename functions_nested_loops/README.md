# **Functions, nested loops**

## **Requirements**
* All files will be compiled on Ubuntu 20.04 LTS using `gcc`
* All files should end with a new line
* A `README.md` file, at the root of the folder of the project
* Code should use the `Betty` style
* Not allowed to use global variables
* No more than 5 functions per file
* Not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
* Allowed to use _putchar
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h

## Compilation
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89```

## **Files**
* **0-putchar.c**:
Program that prints _putchar
* **1-alphabet.c**:
Function that prints the alphabet, in lowercase.
     - Prototype: `void print_alphabet(void);`
     - Only use `putchar` twice in this code
* **2-print_alphabet_x10.c**:
Function that prints 10 times the alphabet, in lowercase.
     - Prototype: `void print_alphabet_x10(void);`
     - Only use `putchar` twice in this code
* **3-islower.c**:
Function that checks for lowercase character.
     - Prototype: `int _islower(int c);`
     - Returns `1` if `c` is lowercase
     - Returns `0` otherwise
* **4-isalpha.c**:
Function that checks for alphabetic character. 
     - Prototype: `int _isalpha(int c);`
     - Returns `1` if `c` is a letter, lowercase or uppercase
     - Returns `0` otherwise

* **5-sign.c**:
Function that prints the sign of a number.
     - Prototype: `int print_sign(int n);`
     - Returns `1` and prints `+` if `n` is greater than zero
     - Returns `0` and prints `0` if `n` is zero
     - Returns `-1` and prints `-` if `n` less than zero
* **6-abs.c**:
Function that computes the absolute value of an integer.
     - Prototype: `int _abs(int);`
* **7-print_last_digit.c**:
Function that prints the last digit of a number.
     - Prototype: `int print_last_digit(int);`
     - Returns the value of the last digit
* **8-24_hours.c**:
Function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
     - Prototype: `void jack_bauer(void);`
* **9-times_table.c**:
Function that prints the 9 times table, starting with 0.
     - Prototype: `void times_table(void);`
* **10-add.c**:
Function that adds two integers and returns the result.
     - Prototype: `int add(int, int);`
* **10-add.c**:
Function that prints all natural numbers from `n` to `98`.
     - Prototype: `void print_to_98(int n);`
