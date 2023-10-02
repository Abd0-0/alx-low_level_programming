#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: a pointer to the destination string[0].
 * @src: This is the string to be copied.
 * @n: The number of characters to be copied from source.
 *
 * Return: a pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, cn;

	cn = strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i > cn)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}
