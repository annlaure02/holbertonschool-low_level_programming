#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
