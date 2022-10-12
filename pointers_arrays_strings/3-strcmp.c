#include "main.h"

/**
 * _strcmp - compares two strings exactly like strcmp
 *
 * @s1: parameter of the function
 * @s2: parameter of the function
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
