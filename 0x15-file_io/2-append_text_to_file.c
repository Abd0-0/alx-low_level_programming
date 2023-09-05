#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t len, count = 0;

	if (!text_content)
		len = 0;

	for (i = 0; text_content[i] != '\0'; i++)
		;

	len = i;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (len != 0)
		count = write(fd, text_content, len);

	close(fd);

	if (count != len)
		return (-1);

	if (count == len)
		return (1);
}
