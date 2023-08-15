#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Short description for dog
 * @name: the name of the dog.
 * @owner: the owner of the dog.
 * @age: the dog's age.
 *
 * Description: Longer description for my dog data type
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* ifndef DOG_H */
