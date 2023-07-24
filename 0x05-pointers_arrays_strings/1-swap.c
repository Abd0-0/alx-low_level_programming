#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of 2 int(s).
 *
 * @a: A pointer to the first value.
 * @b: A pointer to the 2nd value.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
