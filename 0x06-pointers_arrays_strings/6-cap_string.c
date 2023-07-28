#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes first char of all words of a string.
 *
 * @c: a pointer to the string.
 *
 * Return: an address to the captalize string.
 *
 */

char *cap_string(char *c)
{
	int i, j;

	char sep[22] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')'};

	sep[11] = '{';
	sep[12] = '}';
	sep[13] = '\0';

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (c[i] == sep[j] && c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
	}

	return (c);
}
