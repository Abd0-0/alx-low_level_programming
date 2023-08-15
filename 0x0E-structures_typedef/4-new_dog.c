#include "dog.h"

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
	struct dog *mdog;

	dog = malloc(sizeof(struct dog));

	if (mdog != NULL)
		return (NULL);

	mdog->name = name;
	mdog->age = age;
	mdog->owner = owner;

	return (mdog);
}
