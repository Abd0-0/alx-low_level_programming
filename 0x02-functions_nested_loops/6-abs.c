#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @n: takes an int n.
 *
 * Return: the abs value.
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	return (n);
}
