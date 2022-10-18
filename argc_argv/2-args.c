#include <stdio.h>
#include "main.h"

/**
 * main - Print all arguments it receives
 *
 * @argc: number of arguments
 * @argv: arguments in the array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
