#include "main.h"

int _sqrt(int n, int z);

/**
 * _sqrt_recursion - function that returns the natural square root of a n.
 *
 * @n: the number to get it's sqrt.
 *
 * Return: sqrt of n.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - unction that returns the natural square root of a n.
 *
 * @n: the number to get it's sqrt.
 * @nn: n * n.
 *
 * Return: sqrt of n.
 */

int _sqrt(int n, int z)
{
	if (z * z == n)
		return (z);

	else if (z * z < n)
		return (_sqrt(n, z + 1));

	else
		return (-1);
}
