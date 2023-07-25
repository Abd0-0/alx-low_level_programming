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

	char tmp;

	for (i = 0;  i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = s[i];
	}

}
