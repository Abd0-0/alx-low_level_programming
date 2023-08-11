#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc.
 *
 * @b: the size.
 *
 * Return:  a pointer to the allocated memory, or 98.
 *
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		return (98);

	return (0);
}
