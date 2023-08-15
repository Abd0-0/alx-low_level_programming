#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: dog's name
 * @age: the dog's age.
 * @owner: the owner of the dog.
 *
 * Return: a pointer to the struct.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mdog;

	mdog = malloc(sizeof(dog_t));

	if (mdog == 0)
		return (NULL);

	mdog->name = name;
	mdog->age = age;
	mdog->owner = owner;

	return (mdog);
}
