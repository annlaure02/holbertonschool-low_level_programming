#include <stdio.h>

/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.int n;
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
