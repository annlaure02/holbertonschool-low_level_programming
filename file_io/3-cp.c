#include "main.h"

/**
 * cp_file - copy file
 *
 * @src: source
 * @dest: destination
 *
 * Return: void
 */

void cp_file(char *src, char *dest)
{
	int op1, op2, rd, wr;
	char buffer[1024];

	op1 = open(src, O_RDONLY);
	op2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (op1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (op2 < 0)
        {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
        }
	while (1)
	{
		rd = read(op1, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		if (rd == 0)
			break;
		wr = write(op2, buffer, rd);
		if (wr == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
			close(op1);
		}
	}
	if (close(op1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op1);
		exit(100);
		close(op2);
	}
	if (close(op2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", op2);
		exit(100);
	}
}

/**
 * main - copie the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: arguments in the array
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(argv[1], argv[2]);

	return (0);
}
