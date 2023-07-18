#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 *
 * @c : takes an input and store it.
 *
 * Return: 1 if true, else 0
 *
*/

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}

	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}

	else
		return (0);
}
