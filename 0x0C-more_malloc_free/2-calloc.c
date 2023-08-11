#include <stdlib.h>
#include "main.h"

/**
 * _calloc - unction that allocates memory for an array.
 *
 * @nmemb: number of members.
 * @size: the size of each member.
 *
 * Return: a pointer to the first element.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
