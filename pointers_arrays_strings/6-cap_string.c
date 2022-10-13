#include "main.h"

/**
 * cap_string - change all lowercase letters of a string to uppercase
 *
 * @str: parameter of the function
 *
 * Return: uppercase
 */

char *cap_string(char *str)
{
	int i;

	
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' ||
		str[i] == '\t' ||
		str[i] == '\n' ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	}
	return (str);
}
