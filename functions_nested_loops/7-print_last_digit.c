#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: digit number
 *
 * Return: to the last digit of the number
 */

int print_last_digit(int n)
{
	int d;

	if (n < 0)
	{
		d = -1 * (n % 10);
		_putchar(d + '0');
		return (d);
	}
	else
	{
		d = n % 10;
		_putchar(d + '0');
		return (d);
	}
}

