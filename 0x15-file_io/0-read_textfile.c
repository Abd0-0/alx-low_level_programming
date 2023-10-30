#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout.
 *
 * @filename: a pointer to file.
 *
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[8192];
	int fd;
	ssize_t count;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count = read(fd, buffer, letters);
	count = write(STDOUT_FILENO, buffer, count);

	if (count == -1)
		return (0);

	close(fd);

	return (count);
}
