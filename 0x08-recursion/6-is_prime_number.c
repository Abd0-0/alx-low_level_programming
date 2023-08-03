#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number, or not.
 *
 * @n: the number to check.
 *
 * Return: 1 if the input integer is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);

	else if (n % 2 == 0 || n <= 1)
		return (0);

	else if (n % 2 == 0 || n % 5 == 0)
		return (0);

	else
		return (1);
}
