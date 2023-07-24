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
	int len, i;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[0] == "")
		{
			len = 0;
			break;
		}

		len = i;
	}

	return (len);
}
