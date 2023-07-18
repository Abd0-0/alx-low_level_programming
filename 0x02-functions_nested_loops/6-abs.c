#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 *
 * @int: takes an int.
 *
 * Return: an int.
*/

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	return (n);
}
