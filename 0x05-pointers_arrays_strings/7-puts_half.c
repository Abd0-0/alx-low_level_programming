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

	l = n / 2;

	if (n % 2 != 0)
	{
		for (i = l + 2; i <= n - 1; i++)
		{
			_putchar(str[i]);
		}

	else
	{
		for (i = l; i <= n - 1; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
