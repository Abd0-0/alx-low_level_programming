#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block.
 *
 * @old_size: the old size.
 * @new_size: the new wanted size.
 *
 * @ptr: a pointer to the previous memory.
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
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	np = malloc(new_size);

	if (np == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			np[i] = *((char *) ptr + i);
	}

	else if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		np[i] = (*(char *)ptr + i);
	}

	free(ptr);
	return (np);
}
