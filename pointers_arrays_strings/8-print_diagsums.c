#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the two diagonals of a square matrix
 * of integers
 *
 * @a: parameter of the function
 * @size: parameter of the function
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + (a[(size + 1) * i]);
		diag2 = diag2 + (a[(size - 1) * (i + 1)]);
	}
	printf("%d, %d\n", diag1, diag2);
}
