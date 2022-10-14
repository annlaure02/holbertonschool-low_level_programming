#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: parameter of the function
 * @accept: parameter of the function
 *
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
