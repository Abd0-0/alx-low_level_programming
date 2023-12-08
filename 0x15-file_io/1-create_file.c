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
	else
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		len = i;
	}

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (fd < 0)
		return (-1);

	if (len == 0)
	{
		close(fd);
		return (1);
	}

	else
	{
		count = write(fd, text_content, len);
		close(fd);
	}

	if (count < 0)
		return (-1);

	return (1);
}