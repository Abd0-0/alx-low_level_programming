#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void, (stores nothing)
*/

void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = j * i;

			if (m > 9)
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}

			else
				_putchar(m + 48);

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (m < 9)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
