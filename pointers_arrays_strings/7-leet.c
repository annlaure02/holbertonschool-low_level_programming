#include "main.h"

/**
 * leet - encodes a string into 1337, a & A replaced by 4, e & E replaced by 3,
 * o & O replaced by 0, t & T replaced by 7, l & L replaced by 1,
 *
 * @s: parameter of the function
 *
 * Return: change letter by number
 */

char *leet(char *s)
{
	int i;
	int j;
	char lettre[] = {"aAeEoOtTlL"};
	char chiffre[] = {"4433007711"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lettre[j] != '\0'; j++)
		{
			if (s[i] == lettre[j])
				s[i] = chiffre[j];
		}
	}
	return (s);
}
