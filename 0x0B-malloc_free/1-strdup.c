#include "main.h"

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
	int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	size = i;

	ptr = malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
