#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0
*/

int main(void)

{
	char az;
	char AZ;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		putchar(az);
	}
	for (AZ = 'A' ; AZ <= 'Z' ; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');
	return (0);

}
