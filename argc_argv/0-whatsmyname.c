#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 *
 * @argc: number of arguments
 * @argv: arguments in array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
