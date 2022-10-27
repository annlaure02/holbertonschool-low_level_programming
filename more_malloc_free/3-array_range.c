#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: smallest integer
 * @max: largest integer
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, r;

	if (min > max)
		return (NULL);
	r = max - min + 1;
	array = malloc(sizeof(int) * r);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < r; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
	free(array);
}
