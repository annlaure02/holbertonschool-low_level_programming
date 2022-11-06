#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct form -  list of types of arguments
 * @d: char
 * @a: function's pointer
 * Description: Longer description
 */
typedef struct _print
{
	char *b;
	void (*a)(va_list ap);
} _print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
