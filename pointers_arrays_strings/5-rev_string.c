#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: parameter of the function
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int nouv;
	char temp;

	while (s[len])
		len++;
	for (nouv = len - 1; nouv >= len / 2; nouv--)
	{
		temp = s[nouv];
		s[nouv] = s[len - nouv - 1];
		s[len - nouv - 1] = temp;
	}
}
