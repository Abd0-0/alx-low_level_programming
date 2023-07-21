#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: the size of triangle.
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, h;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j != 0; j--)
			{
				_putchar(' ');
			}

			for (h = 1; h <= i; h++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}

}
