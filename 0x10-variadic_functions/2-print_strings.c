#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings.
 * @n:number of strings passed to the function.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list vp;

	va_start(vp, n);

	if (!n)
	{
		printf("\n");
		return;
	}

	for (i = 1; i <= n; i++)
	{
		s = va_arg(vp, char *);

		if (!s)
			printf("(nil)");

		else if (s)
		{
			printf("%s", s);

			if (i == n)
				separator = NULL;

			if (separator && separator[i])
				printf("%s", separator);
		}
	}
		printf("\n");
}
