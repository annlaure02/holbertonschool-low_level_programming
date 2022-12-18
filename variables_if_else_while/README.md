# **Variables, if, else, while**

## **Requirements**
* All files will be compiled on Ubuntu 20.04 LTS using `gcc`
* All files should end with a new line
* A `README.md` file, at the root of the folder of the project
* There should be no errors and no warnings during compilation
* Not allowed to use `system`
* Code should use the `Betty` style

## Compilation
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89```

## **Files**
* **0-positive_or_negative.c**:
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
     - The variable `n` will store a different value every time you will run this program
     - You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
     - The output of the program should be:
        * The number, followed by
            - if the number is greater than 0: `is positive`
            - if the number is 0: `is zero`
            - if the number is less than 0: `is negative`
* **1-last_digit.c**:
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
     - The variable `n` will store a different value every time you will run this program
     - Don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
     - The output of the program should be:
        * The string `Last digit of`, followed by
        * `n`, followed by
        * The string `is`, followed by
            - if the last digit of `n` is greater than 5: the string `and is greater than 5`
            - if the last digit of `n` is 0: the string `and is 0`
            - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
* **2-print_alphabet.c**:
Program that prints the alphabet in lowercase.
     - Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     - All code should be in the `main` function
     - Only use `putchar` twice in this code
* **3-print_alphabets.c**:
Program that prints the alphabet in lowercase, and then in uppercase.
     - Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     - All code should be in the `main` function
     - Only use `putchar` three times in this code
* **4-print_alphabt.c**:
Program that prints the alphabet in lowercase.
     - Print all the letters except `q` and `e`
     - Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     - All code should be in the `main` function
     - Only use `putchar` twice in this code
* **5-print_numbers.c**:
program that prints all single digit numbers of base 10 starting from `0`
     - All code should be in the `main` function
* **6-print_numberz.c**:
program that prints all single digit numbers of base 10 starting from `0`
     - Not allowed to use any variable of type `char`
     - Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     - Only use `putchar` twice in this code
     - All code should be in the `main` function
* **7-print_tebahpla.c**:
Program that prints the lowercase alphabet in reverse.
     - Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     - All code should be in the `main` function
     - Only use `putchar` twice in this code
* **8-print_base16.c**:
Program that prints all the numbers of base 16 in lowercase.
     - Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     - All code should be in the `main` function
     - Only use `putchar` three times in this code
* **9-print_comb.c**:
Program that prints all possible combinations of single-digit numbers.
     - Numbers must be separated by `,`, followed by a space
     - Numbers should be printed in ascending order
     - Only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
     - All code should be in the `main` function
     - Only use `putchar` four times maximum in your code
     - Not allowed to use any variable of type `char`
