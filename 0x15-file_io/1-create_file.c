#include "main.h"

/**
 * create_file -  a function that creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: the name of the file to create.
 *
 * Return: 1 on success, -1 on failure.
 */


int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count = 0;
	ssize_t i, len;

	if (!text_content)
		len = 0;

	for (i = 0; *text_content++; i++)
		;
	len = i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (len > 0)
	{
		count = write(fd, text_content, len);

		if (count != len)
			return (-1);
	}

	close(fd);
	return (1);
}
