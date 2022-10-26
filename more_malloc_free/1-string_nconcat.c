#include <stdlib.h>
#include "main.h"
#include <stdio.h>

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
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: n bytes
 *
 * Return: the contents of s1, followed by the first n bytes of s2,
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *both;
	unsigned int lenght_s1;
	unsigned int lenght_s2;
	unsigned int i, r;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lenght_s1 = _strlen(s1);
	lenght_s2 = _strlen(s2);

	if (lenght_s2 >= n)
		lenght_s2 = n;

	r = lenght_s1 + lenght_s2 + 1;

	both = malloc(sizeof(char) * r);

	if (both == NULL)
		return (NULL);
	for (i = 0; i < lenght_s1; i++)
		both[i] = s1[i];

	for (i = 0; i < lenght_s2; i++)
		both[lenght_s1++] = s2[i];

	both[r - 1] = '\0';

	return (both);
	free(both);
}

