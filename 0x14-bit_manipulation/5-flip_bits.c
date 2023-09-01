#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 *  you would need to flip to get from one number to another.
 *
 *  @n: 1st number.
 *  @m: 2nd number.
 *
 *  Return: the number of flibs.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter, xor;

	xor = n ^ m;
	counter = 0;

	while (xor)
	{
		if (xor & 1UL)
			counter++;
		xor = xor >> 1;
	}

	return (counter);
}
