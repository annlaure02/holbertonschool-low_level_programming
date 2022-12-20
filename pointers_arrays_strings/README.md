# **Pointers, arrays and strings**

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
### Project 1
* **0-reset_to_98.c**:
Function that takes a pointer to an `int` as parameter and updates the value it points to `98`.
     - Prototype: `void reset_to_98(int *n);`
* **1-swap.c**:
Function that swaps the values of two integers.
     - Prototype: `void swap_int(int *a, int *b);`
* **2-strlen.c**:
Function that returns the length of a string.
     - Prototype: `int _strlen(char *s);`
* **3-puts.c**:
Function that prints a string, followed by a new line, to `stdout`.
     - Prototype: `void _puts(char *str);`
* **4-print_rev.c**:
Function that prints a string, in reverse.
     - Prototype: `void print_rev(char *s);`
* **5-rev_string.c**:
Function that reverses a string.
     - Prototype: `void rev_string(char *s);`
* **6-puts2.c**:
Function that prints every other character of a string, starting with the first character.
     - Prototype: `void puts2(char *str);`
* **7-puts_half.c**:
Function that prints half of a string.
     - Prototype: `void puts_half(char *str);`
     - The function should print the second half of the string
     - If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`
* **8-print_array.c**:
Function that prints n elements of an array of integers.
     - Prototype: `void print_array(int *a, int n);`
     - Where `n` is the number of elements of the array to be printed
     - Numbers must be separated by comma, followed by a space
     - The numbers should be displayed in the same order as they are stored in the array
     - Allowed to use `printf`
* **9-strcpy.c**:
Function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
     - Prototype: `char *_strcpy(char *dest, char *src);`
     - Return value: the pointer to `dest`

### Project 2
* **0-strcat.c**:
Function that concatenates two strings.
     - Prototype: `char *_strcat(char *dest, char *src);`
     - This function appends the `src` string to the `dest `string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
     - Return a pointer to the resulting string `dest`
* **1-strncat.c**:
Function that concatenates two strings.
     - Prototype: `char *_strncat(char *dest, char *src, int n);`
     - The `_strncat` function is similar to the `_strcat` function, except that
       * it will use at most `n` bytes from `src`; and
       * `src` does not need to be null-terminated if it contains `n` or more bytes
     - Return a pointer to the resulting string `dest`
* **2-strncpy.c**:
Function that copies a string.
     - Prototype: `char *_strncpy(char *dest, char *src, int n);`
     - This function should work exactly like `strncpy`
* **3-strcmp.c**:
Function that compares two strings.
     - Prototype: `int _strcmp(char *s1, char *s2);`
     - This function should work exactly like `strcmp`
* **4-rev_array.c**:
Function that reverses the content of an array of integers.
     - Prototype: `void reverse_array(int *a, int n);`
     - Where `n` is the number of elements of the array
* **5-string_toupper.c**:
Function that changes all lowercase letters of a string to uppercase.
     - Prototype: `char *string_toupper(char *);`
* **6-cap_string.c**:
Function that capitalizes all words of a string.
     - Prototype: `char *cap_string(char *);`
     - Separators of words: space, tabulation, new line, `,`, `;`, `.`, `!`, `?`, `"`, `(`,` )`, `{`, and `}`
* **7-leet.c**:
Function that that encodes a string into `1337`.
     - Prototype: `char *leet(char *);`
     - Letters `a` and `A` should be replaced by `4`
     - Letters `e` and `E` should be replaced by `3`
     - Letters `o` and `O` should be replaced by `0`
     - Letters `t` and `T` should be replaced by `7`
     - Letters `l` and `L` should be replaced by `1`
     - Only use one `if` in your code
     - Only use two loops in your code
     - Not allowed to use `switch`
     - Not allowed to use any ternary operation

### Project 3
* **0-memset.c**:
Function that fills memory with a constant byte.
     - Prototype: `char *_memset(char *s, char b, unsigned int n);`
     - The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
     - Return a pointer to the memory area `s`
* **1-memcpy.c**:
Function that copies memory area.
     - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
     - The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
     - Return a pointer to `dest`
* **2-strchr.c**:
Function that locates a character in a string.
     - Prototype: `char *_strchr(char *s, char c);`
     - The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
     - Return a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found
* **3-strspn.c**:
Function that gets the length of a prefix substring.
     - Prototype: `unsigned int _strspn(char *s, char *accept);`
     - Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`
* **4-strpbrk.c**:
Function that searches a string for any of a set of bytes.
     - Prototype: `char *_strpbrk(char *s, char *accept);`
     - The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
     - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found
* **5-strstr.c**:
Function that locates a substring.
     - Prototype: `char *_strstr(char *haystack, char *needle);`
     - The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
     - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
* **7-print_chessboard.c**:
Function that prints the chessboard.
     - Prototype: `void print_chessboard(char (*a)[8]);`
* **8-print_diagsums.c**:
Function that prints the sum of the two diagonals of a square matrix of integers.
     - Prototype: `void print_diagsums(int *a, int size);`
     - Allowed to use the standard library
