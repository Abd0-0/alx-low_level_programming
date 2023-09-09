#include "main.h"

void closefile(int fd);

/**
 * main - check the code.
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: always 0.
 */

int main(int ac, char **av)
{
	int fd_to, fd_from;
	ssize_t count_t, count_f;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((count_f = read(fd_from, buf, 1024)) > 0)
	{
		count_t = write(fd_to, buf, count_f);

		if (count_t != count_f)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (count_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	closefile(fd_to);
	closefile(fd_from);
	return (0);
}


/**
 * closefile - function to close a file, or print err message.
 *
 * @fd: file discriptor.
 */

void closefile(int fd)
{
	int i = close(fd);

	if (i < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd), exit(100);
}
