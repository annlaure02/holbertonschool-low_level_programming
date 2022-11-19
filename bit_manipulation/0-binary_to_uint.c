#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 *
 * @b:  pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int mult = 1;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (result);
}
