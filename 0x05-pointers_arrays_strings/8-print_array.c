#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * followed by a new line
 *
 * @a: a pointer to the elments;
 *
 * @n: n elements of an array.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%i, ", a[i]);
		}

		else
			printf("%i", a[i]);

	}

	printf("\n");
}
