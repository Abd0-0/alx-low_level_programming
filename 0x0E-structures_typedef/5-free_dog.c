#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the allocated memory.
 *
 * @d: a pointer to the allocated memory.
 */


void free_dog(dog_t *d)
{
	if (d && d->name)
		free(d->name);
	if (d && d->owner)
		free(d->owner);
	if (d)
		free(d);
}
