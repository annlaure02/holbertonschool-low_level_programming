#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98, followed by a new line
 * @n: natural number
 *
 * Return: natural numbers separate by a comma, followed by a space, in order,
 * first printed number should be the number passed in the function,
 * and the last printed number should be 98
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
		printf("%d, ", n);
		n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
		printf("%d, ", n);
		n++;
		}
		printf("%d\n", n);
	}

}
