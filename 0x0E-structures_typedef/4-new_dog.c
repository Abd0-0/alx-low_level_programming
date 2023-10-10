#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: dog's name
 * @age: the dog's age.
 * @owner: the owner of the dog.
 *
 * Return: a pointer to dog_t struct.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	char *namep, *ownerp;

	nd = malloc(sizeof(dog_t));

	if (!nd)
		return (NULL);

	namep = _strdup(name);
	ownerp = _strdup(owner);

	if (!namep || !ownerp || !age)
		return (NULL);

	nd->name = namep;
	nd->age = age;
	nd->owner = ownerp;

	return (nd);
}


/**
 * _strdup - function returns a ptr to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *
 *  @str: the string given as a parameter.
 *
 *  Return: a pointer to a newly allocated space in memory,
 *  NULL in case of failure.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, s;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;
	s = i;

	ptr = malloc((s + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		ptr[i] = str[i];
	}

	ptr[i] = '\0';

	return (ptr);
}
