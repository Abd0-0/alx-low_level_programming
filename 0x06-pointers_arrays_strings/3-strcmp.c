#include "main.h"
#include <string.h>

/**
 * _strcmp -  a function that compares two strings.
 *
 * @s1: a pointer to the 0 element of the first string.
 * @s2: a pointer to the 0 element of the second string.
 *
 * Return: 0 if both strings are found to be identical.
 *
 * ( > 0 ) if first not-matching character in first_str
 * has a greater ASCII value than the corresponding character in second_str
 *
 * ( < 0) when the first not-matching character in first_str
 *  has a lesser ASCII value than the corresponding character in second_str.
 */

int _strcmp(char *s1, char *s2)
{
	int i, re;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			re = s1[i] - s2[i];
			break;
		}

		else
		{
			re = 0;
		}
	}

	return (re);
}
