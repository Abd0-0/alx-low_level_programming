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

	n = strlen(s) + 1;

	for (i = 0;  s[i] != '\0'; i++)
	{
		_putchar(s[n - i]);
	}

	_putchar('\n');
}
