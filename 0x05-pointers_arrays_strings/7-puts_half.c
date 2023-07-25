#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *
 * @str: a pointer to a string.
 */

void puts_half(char *str)
{
	int i, l, n;

	for (i = 0; str[i] != '\0'; i++)
	;

	n = i;

	if (n % 2 == 0)
	{
		l = n / 2;

		for (i = l; i <= n - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		l = (n - 1) / 2;

		for (i = n - 1 ; i > l; i--)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
