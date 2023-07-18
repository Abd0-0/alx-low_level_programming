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
	int i, l = 0, c[] = n;

	for (i = 0; c[i] != '\0'; i++)
	{
		l = c[i];
	}

	return (l);
}
