#include "main.h"

/**
 * is_palindrome - function that check if a string is a palindrome.
 *
 * @s: a pointer to a string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int is_palindrome(char *s)
{
	int n;
	char *end = s;

	end = to_the_end(end);
	n = compare(s, end);
	return (n);
}


/**
 * to_the_end - a function that returns a pointer to the end of a string.
 *
 * @e: a pointer to a string.
 *
 * Return: pointer to the end of a string.
 *
 */

char *to_the_end(char *e)
{
	char *end;

	if (*e == '\0')
	{
		end = e - 1;
		return (end);
	}

	else
		return (to_the_end(e + 1));

	return (end);
}

/**
 * compare - function that returns 1 if a string is a palindrome.
 *
 * @beg: a pointer to the beginig of a string.
 * @end: a pointer to the end of a string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 *
 */

int compare(char *beg, char *end)
{
	if (*beg == '\0')
		return (1);

	else if (*beg != *end)
		return (0);

	else
		return (compare(beg + 1, end - 1));

	return (1);
}
