#include <stdio.h>

/**
 * main - Entry point
 * prints all the numbers of base 16 in lowercase, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int af;

	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}

	for (af = 'a' ; af <= 'f' ; af++)
	{
		putchar(af);
	}
	putchar('\n');
	return (0);
}

