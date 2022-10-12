#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 *
 * @str: parameter of the function
 *
 * Return: uppercase
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (char) (str[i] - 32);
	}
	return (str);
}
