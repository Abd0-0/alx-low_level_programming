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

	n = strlen(s);

	char arr[n];

	for (i = n - 1;  i >= 0; i--)
	{
		arr[(n - 1) - i] = s[i]);
	}

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = arr[i];
	}

	_putchar('\n');
}
