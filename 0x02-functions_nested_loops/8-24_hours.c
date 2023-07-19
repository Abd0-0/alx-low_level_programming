#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day
 *  starting from 00:00 to 23:59.
 *
 * Return: void.
*/

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar((':');
			_putchar((m / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar('n');
		}
	}
}
