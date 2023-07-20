#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 *
 * @n: is the number of times the character _ should be printed.
 */

void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
	}

	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('_');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
