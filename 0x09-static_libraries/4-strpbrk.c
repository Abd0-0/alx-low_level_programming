#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s:the main string to be scanned.
 * @accept: the string containing the list of characters to match in s.
 *
 * Return: a pointer to s,
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = '\0';
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
