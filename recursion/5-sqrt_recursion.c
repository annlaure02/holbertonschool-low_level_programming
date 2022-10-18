#include "main.h"

/**
 * sqtr_root - fonction for _sqtr_recursion
 *
 * @x: parameter of the function
 * @n: parameter of the function
 *
 * Return: If n does not have a natural square root,
 * the function should return -1
 */

int sqtr_root(int x, int n)
{
	if (x * x == n)
		return (x);
	else if (x * x > n)
		return (-1);
	return (sqtr_root(x + 1, n));
}


/**
 * _sqrt_recursion - return the natural square root of a number
 *
 * @n: parameter of the function
 *
 * Return: If n doesn't have a natural square root,
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (sqtr_root(1, n));
}

