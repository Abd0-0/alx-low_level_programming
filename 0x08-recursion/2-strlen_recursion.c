#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 *
 * @s: a pointer to a string.
 *
 * Return: the length of a string.
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		retur (1 + _strlen_recursion(s + 1));
}