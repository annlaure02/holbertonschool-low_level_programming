#include "main.h"

/**
 * prime_nb - return 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: parameter of the function
 * @x: parameter of the function
 *
 * Return: 1 prime number, otherwise 0
 */

int prime_nb(int n, int x)
{
	if (n <= 1 || n % x == 0)
		return (0);
	else if (n == x)
		return (1);
	else if (n > x)
		prime_nb(n, x + 1);
	return (1);
}

/**
 * is_prime_number - return 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: parameter of the function
 *
 * Return: 1 prime number, otherwise 0
 */

int is_prime_number(int n)
{
	return (prime_nb(n, 2));
}
