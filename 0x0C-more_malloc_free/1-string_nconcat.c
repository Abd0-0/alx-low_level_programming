#include <stdlib.h>
#include "main.h"

/**
 * str_nconcat - function returns a ptr to a newly allocated space in memory,
 *
 * @s1: the 1st string given as a parameter.
 * @s2: the 2nd string given as a parameter.
 * @n: the number of bytes to take.
 *
 *  Return: a pointer to a newly allocated space in memory,
 *  NULL in case of failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *ptr;
	int i, n1, n2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;
	n1 = i;

	i = 0;

	while (s2[i] != '\0')
		i++;

	n2 = i + 1;

	if (n >= n2 - 1)
		n = n2;

	ptr = malloc((n1 + n) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
	{
		ptr[i] = s1[i];
	}

	while (i <= (n1 + n))
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}

	return (ptr);
}
