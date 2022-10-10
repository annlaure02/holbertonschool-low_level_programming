#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter of the function
 *
 * Return: int
 */

int _strlen(char *s)
{
	int n = 0;

	while( *s != '\0')
	{
		s++;
	       	n++;
	}
	return (n);
}
