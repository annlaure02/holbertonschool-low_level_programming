#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX standard output
 *
 * @filename: filename
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}
	close(op);
	return (wr);
}
