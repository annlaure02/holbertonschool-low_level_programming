#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string.
 *
 * @str: array to duplicate
 *
 * Return: a pointer to a new string
 */

char *_strdup(char *str)
{
	char *dup;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{
	}

	dup = malloc(sizeof(char) * len);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len ; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
	free(dup);
}
