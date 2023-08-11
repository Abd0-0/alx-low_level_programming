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
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
