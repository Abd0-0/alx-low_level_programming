#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: a pointer to a string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{
	char *p;
	p = _strlen(s);
	palindrome(s , p - 1);
}


char *_strlen(char *s)
{
        char *p;

        if (*s != '\0')
                 _strlen(s + 1);

	p = s;
        return (p);
}

 int palindrome(char *s , char * p)
{
	if (*p != *s)
		return 0;

	else if (*p == *s)
	{
		if (p == s && n % 2 != 0)
			return (1);

		else if (p - 1 == s + 1)
			return (1);

		palindrome(s + 1 , p - 1);
	}
}
