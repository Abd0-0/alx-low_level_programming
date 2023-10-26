#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: the number.
 *
 */

void print_binary(unsigned long int n)
{
	int bits, count;

	bits = sizeof(n) * 8;
	count = 0;

	while (bits--)
	{
		if (n & 1L << bits)
		{
			_putchar('1');
			count++;
		}

		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
