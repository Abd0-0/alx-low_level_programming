#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * , followed by a new line.
 *
 * @s: a pointer to a string.
 */

void print_rev(char *s)
{
	int i, n;
	n = _strlen(s);
	char *rev;

	for (i = 0;  i < n + 1; i++)
	{
		rev[i] = s[n - i];
	}

	printf("%s\n", rev);
}
