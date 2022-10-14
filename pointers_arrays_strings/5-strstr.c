#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: parameter of the function
 * @needle: parameter of the function
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
	}
	return ('\0');
}
