#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searche for an integer
 *
 * @array: array of interger
 * @size: number of elements in the array
 * @cmp: pointer to the function
 *
 * Return: the index of the first element for which the cmp function
 * doesn't return 0, if no element matches return -1, if size<=0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	if ((array[size]) <= 0)
		return (-1);
	return (cmp(array[size]));
}
