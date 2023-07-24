#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a pointer to a string.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int len = 1, i;

	for (i = 0; *s != '\0'; i++)
	{
		len = i;
	}

	return (len);
}
