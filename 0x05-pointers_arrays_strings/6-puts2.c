#include <stdio.h>
#include "main.h"

/**
 *puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: a pointer to a string.
 */

void puts2(char *str)
{
	int i, n;

	for (i = 0; str[i] != '0'; ++i)
	;

	n = i - 1;

	for (i = 0; i <= n; i = i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
