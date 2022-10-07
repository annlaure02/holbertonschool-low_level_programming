#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: digit 1 to 9
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

