#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: number of arguments
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	va_end(ap);

	return (sum);
}
