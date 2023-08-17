#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 *
 * @array: a pointer to an array.
 * @size: size of the array.
 * @action: is a pointer to which function to use.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size >= 1 && array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
