#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 *
 * @a: parameter of the function
 * @n: parameter of the function
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i != n - 1)
			printf(", ");
		a++;
	}
	printf("\n");
}
