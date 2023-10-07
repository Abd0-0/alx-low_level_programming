#include <stdlib.h>
#include "main.h"
#include <stdio.h>


/**
 * string_nconcat - function creates a newly allocated space in memory,
 *
 * @s1: the 1st string given as a parameter.
 * @s2: the 2nd string given as a parameter.
 * @n: the number of bytes to take.
 *
 *  Return: a pointer to a newly allocated space in memory,
 *  NULL in case of failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, size1, size2, alloc_size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	if (n >= size2)
		n = size2;

	alloc_size = size1 + n + 1;
	ptr = malloc((alloc_size) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		ptr[i] = s1[i];
	}

	j = 0;

	while (i < alloc_size - 1)
	{
		ptr[i] = s2[j];
		i++, j++;
	}

	ptr[i] = '\0';

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
