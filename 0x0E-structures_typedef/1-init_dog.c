#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog.
 *
 * @d: the dog.
 * @name: the dog's name.
 * @age: the age of the dog.
 * @owner: The owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
