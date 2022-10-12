#include "main.h"

/**
 * _strncpy -  copies a string like strncpy
 *
 * @dest: parameter of the function
 * @src: parameter of the function
 * @n: parameter of the function
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
