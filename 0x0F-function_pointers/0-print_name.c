#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 *
 * @name: a pointer to the neme.
 * @f: a pointer to a function.
 */

void print_name(char *name, void (*f)(char *))
{
	if(name)
		f(name);
}
