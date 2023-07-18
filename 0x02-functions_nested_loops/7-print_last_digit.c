#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: an arr that stores integers;
 *
 * Return: l the last digit, which store in l.
*/

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -1 * (n % 10);
	}
	else
		l = n % 10;

	_putchar(l + '0');
	return (l);
}
