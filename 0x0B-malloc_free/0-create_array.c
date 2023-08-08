#include <stdlib.h>
#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 *
 * @size: The size of arr.
 * @c: a specific char.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *ptr;

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}
