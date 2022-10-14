#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 * @s: parameter of the function
 * @c: parameter of the function
 *
 * Return: pointer to the first occurence of a character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{
	}
	if (s[i] == c)
		return (s + i);
	else
		return (0);
}
