#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars, and initializes it with
 * a specific char
 *
 * @size: the size of the memory to print
 * @c: character
 *
 * Return: null if size=0, array null if it fails, array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
