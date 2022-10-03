#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		if (az != 'e' && az != 'q')
			putchar(az);
	}
	putchar('\n');
	return (0);
}
