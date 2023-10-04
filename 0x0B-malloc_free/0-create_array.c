#include "main.h"

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
	unsigned int i;
	char * ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
