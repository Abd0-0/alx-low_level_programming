#include <stdio.h>
#include "main.h"

/**
 * _strcpy -  function that copies strings.
 *
 * @dest: the buffer.
 * @src: a pointer to a string.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; src != '\0'; i++)
	;

	n = i;

	for (i = 0; i < n + 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
