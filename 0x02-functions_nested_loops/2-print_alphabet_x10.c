#include "main.h"

/**
 * print_alphabet_x10()  - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		int alpha;

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar("\n");
	}
