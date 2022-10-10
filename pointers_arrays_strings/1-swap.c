#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temporaire;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
