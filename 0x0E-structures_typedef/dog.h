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

typedef struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* ifndef DOG_H */
