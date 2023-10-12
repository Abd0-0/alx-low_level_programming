#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all of of its parameters.
 *
 * @n: the number count.
 *
 * Return: the sum of all its parameters.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list vaptr;

	if (n == 0)
		return (0);

	va_start(vaptr, n);
	
	if (n)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(vaptr, int);
	}

	va_end(vaptr);
	return (sum);
}
