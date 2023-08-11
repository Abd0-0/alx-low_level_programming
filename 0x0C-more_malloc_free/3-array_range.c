#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 *
 * @min: minimum value,
 * @max: the maximum value.
 *
 * Return: ptr.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, n;

	n = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(n * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(ptr + i) = min;
		min++;
	}

	return (ptr);
}
