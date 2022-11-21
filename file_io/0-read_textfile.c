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
	ssize_t fd;
	char *buf;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	
	read(fd, buf, letters);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	write(1, buf, letters);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (letters);
}
