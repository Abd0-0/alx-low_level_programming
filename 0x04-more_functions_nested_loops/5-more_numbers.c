#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *  followed by a new line.
 */

void more_numbers(void)
{
	int i, j, c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = c % 10;
			}

			_putchar(c + '0');
		}

		_putchar('\n');
	}
}
