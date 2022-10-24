#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate the length of a string
 *
 * @s: content of the string
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}


/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the contents of s1, followed by the contents of s2,
 * and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *both;
	int lenght_s1 = _strlen(s1);
	int lenght_s2 = _strlen(s2);
	int r = lenght_s1 + lenght_s2 + 1;
	int i;

	both = malloc(sizeof(char) * r);

	if (both == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; i < lenght_s1; i++)
		both[i] = s1[i];

	for (i = 0; i < lenght_s2; i++)
		both[lenght_s1 + i] = s2[i];

	both[r - 1] = '\0';

	return (both);
	free(both);
}

