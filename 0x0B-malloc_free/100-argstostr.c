#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int size = 0, n = 0, i, j;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}

	ptr =  malloc(size + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[n] = av[i][j];
			n++;
		}

		ptr[n] = '\n';
		n++;
	}
	return (ptr);
}

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: a pointer to a string.
 *
 * Return: the length of the string.
 */

int _strlen(const char *s)
{
	int i;

	if (!s)
		return (0);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}
