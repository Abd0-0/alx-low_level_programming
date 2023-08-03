#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a n.
 *
 * @n: the number to get it's sqrt.
 *
 * Return: sqrt of n.
 */

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - unction that returns the natural square root of a n.
 *
 * @n: the number to get it's sqrt.
 * @nn: n * n.
 *
 * Return: sqrt of n.
 */

int sqrt(int n, int nn)
{
	if (nn * nn == n)
		return (nn);

	else if (nn * nn < n)
		return (sqrt(n, nn + 1));

	else
		return (-1);
}
