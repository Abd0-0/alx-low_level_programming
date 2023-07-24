#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse
 * , followed by a new line.
 *
 * @s: a pointer to a string.
 */

void print_rev(char *s)
{
	int i, n;
	n = strlen(s);
	char rev[n + 1];

	for (i = 0;  i < n + 1; i++)
	{
		rev[0] = s[n - i];
	}
	
	rev[n + 1] = '\0';

	printf("%s\n", rev);
}
