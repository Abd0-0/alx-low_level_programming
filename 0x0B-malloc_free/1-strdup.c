#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - function returns a ptr to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 *
 *  @str: the string given as a parameter.
 *
 *  Return: a pointer to a newly allocated space in memory,
 *  NULL if str = NULL.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, s;

	s = sizeof(str) / sizeof(str[0]);

	ptr = malloc(s);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
