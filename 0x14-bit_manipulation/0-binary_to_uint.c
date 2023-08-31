#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 *
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the unsigned int, or NULL.
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' || *b != '1')
			return (1);

		if (*b == '1')
			dec = dec * 2 + 1;

		else if (*b == '0')
			dec = dec * 2;
		b++;
	}
	return (dec);
}
