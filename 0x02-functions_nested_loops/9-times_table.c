#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: a value tupe of void.
*/

void times_table(void)
{
	int i, j;

	int m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
			{
				m = j * i;
				putchar(m * 1);
			}

			else
			{
				m = j * i;
				putchar(m * 1);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
