#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - unction that searches for an integer.
 *
 *@array:a pointer to an array.
 *
 * @size: the size of the array.
 *
 * @cmp:a pointer to the function to be used to compare values.
 *
 * Return: the index of the first element.
 * for which the cmp function does not return 0.
 * else it returns -1.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
