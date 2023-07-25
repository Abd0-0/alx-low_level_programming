#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string -  a function that prints a string, in reverse
 *
 * @s: a pointer to a string.
 */

void rev_string(char *s)
{
	int i, n;
	char tmp;

	n = strlen(s);


	for (i = 0;  i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}

}
