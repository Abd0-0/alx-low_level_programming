#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters 2 uppercase.
 *
 * @c: a pointer to the 1st char in string.
 *
 * Return: a pointer to the uppercase string.
 *
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}

	return (c);
}
