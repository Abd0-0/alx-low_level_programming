#include "dog.h"

/**
 * print_dog - prints a struct dog.
 *
 * @d: a pointer to the structure.
 *
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name != 0)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");

		if (d->owner != 0)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");

		printf("Age: %f\n", d->age);
	}
}
