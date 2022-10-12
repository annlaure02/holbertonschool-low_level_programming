#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: parameter of the function
 * @src: parameter of the function
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;

	for (i = 0; dest[i] != '\0'; i++)
		src[len] = dest[i];
	
	src[len] = '\0';
	return (dest);
}
