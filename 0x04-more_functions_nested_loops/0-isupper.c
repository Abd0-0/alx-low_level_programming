#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: the ASCII value of the character
 *
 * Return: 1 if c is uppercase, else 0.
*/

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}
