#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = (left + right) / 2;

		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			right = mid - 1;
		if (value > array[mid])
			left = mid + 1;
	}
	return (-1);
}
