#include "main.h"

/**
 * print_diagonal - a function that draws a straight line in the terminal.
 *
 * @n: is the number of times the character _ should be printed.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}

}
