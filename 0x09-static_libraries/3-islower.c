#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 * @c: checks input of the function
 *
 * Return: 1 if 'c' is lowercase,
 *  0 otherwise (success)
 *
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
