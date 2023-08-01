#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s:the main string to be scanned.
 * @accept: the string containing the list of characters to match in s.
 *
 * Return: the number of bytes in the initial segment of s,
 *  which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}