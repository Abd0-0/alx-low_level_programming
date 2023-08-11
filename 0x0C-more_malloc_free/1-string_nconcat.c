#include <stdlib.h>
#include "main.h"
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
	unsigned int i, n1, n2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	n1 = i;

	for (i = 0; s2[i] != '\0'; i++)
		;
	n2 = i;

	if (n >= n2)
		n = n2;

	ptr = malloc((n1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
	{
		ptr[i] = s1[i];
	}

	while (i <= (n1 + n + 1))
	{
		ptr[i] = *s2;
		s2++;
		i++;
	}
	return (ptr);
}
