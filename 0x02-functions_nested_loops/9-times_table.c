#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: a value tupe of void.
*/

void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		putcahr(48);

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			m = j * i;

			if (m <= 9)
			{
				_putchar(' ');
			}

			else
			{
				putchar((m / 10) * 48);
			}

			_putchar((m % 10) * 48);
		}
		_putchar('\n');
	}
}
