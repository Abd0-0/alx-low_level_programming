#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 *
 * @s: a pointer to a string.
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else if (*s != "\0")
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
