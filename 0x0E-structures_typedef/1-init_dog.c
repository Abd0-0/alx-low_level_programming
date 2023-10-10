#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog.
 *
 * @d: a pointer to dog_t type.
 * @name: the dog's name.
 * @age: the age of the dog.
 * @owner: The owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
