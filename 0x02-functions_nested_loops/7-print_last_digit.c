#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number.
 *
 * @n: an arr that stores integers;
 *
 * Return: l the last digit, which store in l.
*/

int print_last_digit(int n[])
{
	int i, l = 0;

	for (i = 0; n[i] != '\0'; i++)
	{
		l = n[i];
	}

	return (l);
}
