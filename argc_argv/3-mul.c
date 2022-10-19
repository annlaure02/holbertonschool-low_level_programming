#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplie two numbers. If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 *
 * @argc: number of arguments
 * @argv: arguments in the array
 *
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int r = a * b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", r);
	return (0);
}
