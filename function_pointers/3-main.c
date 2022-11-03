#include "3-calc.h"

/**
 * main - calculate
 *
 * @argc: number of arguments
 * @argv: arguments in the array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = (argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (0);
}
