#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block.
 *
 * @old_size: the old size.
 * @new_size: the new wanted size.
 *
 * Return: a pointer to the new biger memory location.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		new_size += old_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	np = malloc(new_size);

	if (np == NULL)
		return (NULL);

	for (i = 0; i < old_size - 1; i++)
	{
		np[i] = (unsigned char *)ptr[i];
	}

	free(ptr);
	return (np);
}
