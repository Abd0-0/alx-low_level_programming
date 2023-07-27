#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: a pointer to a string.
 *
 * Return: a pointer to the leet string.
 */

char *leet(char *s)
{
	int i, j;

	char l[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l', '\0'};

	char lee[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = lee[j / 2];
			}
		}
	}

	return (s);
}
