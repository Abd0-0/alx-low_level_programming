#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format:  a list of types of arguments passed to the function.
 *
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i, j;

	s_type type[] = {
		{"c", pc},
		{"s", ps},
		{"i", pi},
		{"f", pf},
	};

	va_start(ptr, format);

	i = 0;

	while (format[i] && format)
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == type[j].op[0])
			{
				type[j].f(ptr);
				if (format[i + 1])
					printf(", ");
			}

			j++;
		}

		i++;
	}
	printf("\n");

	va_end(ptr);
}

/**
 * ps - function to print strings.
 *
 * @ptr: pointer to the argument to print.
 */

void ps(va_list ptr)
{
	char *p;
       	(p = va_arg(ptr, char *)) ? p : "(nil)";

	printf("%s", p);
}

/**
 * pc - function to print char.
 *
 * @ptr: pointer to the argument to print.
 */

void pc(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

/**
 * pi - function to print int.
 *
 * @ptr: pointer to the argument to print.
 */

void pi(va_list ptr)
{
	printf("%i", va_arg(ptr, int));
}

/**
 * pf - function to print float.
 *
 * @ptr: pointer to the argument to print.
 */
void pf(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}
