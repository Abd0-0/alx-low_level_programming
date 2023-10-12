#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 *
 * @n: the number count.
 * @separator: is the string to be printed between numbers.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list vaptr;

	va_start(vaptr, n);

	if (!n)
	{
		printf("\n");
		return;
	}

	if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			x = va_arg(vaptr, int);
			printf("%i", x);

			if (i == n)
				separator = NULL;

			if (separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
	}

	va_end(vaptr);
}
