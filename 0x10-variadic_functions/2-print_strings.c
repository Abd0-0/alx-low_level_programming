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

	if (n > 1)
	{
		for (i = 0; i < n - 1; i++)
		{
			s = va_arg(vp, char *);

			if (s == NULL)
				printf("(nil)");

			else
				printf("%s", s);

			if (separator != NULL)
				printf("%s", separator);
		}
	}

	s = va_arg(vp, char *);

	if (s == NULL)
		printf("(nil)");

	else
		printf("%s\n", s);
}
