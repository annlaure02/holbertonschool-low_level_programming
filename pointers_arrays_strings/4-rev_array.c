#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 *
 * @a: parameter of the function
 * @n: parameter of the function
 *
 * Return: rien
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0 ; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
