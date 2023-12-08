#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: the number.
 *
 * @index: index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = sizeof(n) * 8;

	if (index >= bits)
		return (-1);

	*n = (~(1 << index) & *n);

	return (1);
}