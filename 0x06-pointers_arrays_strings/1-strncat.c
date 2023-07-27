#include <stdio.h>
#include <string.h>

/**
 * _strncat -  a function that concatenates two strings.
 *
 * @dest: a pointer to the destination string[0].
 * @src: a pointer to the string[0] that will append at the end of dest.
 * @n: n bytes to add.
 *
 * Return: a pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, nd, ns;

	nd = strlen(dest);
	ns = strlen(src);

	if (n > ns)
		n = ns;

	for (i = nd; i < nd + n; i++)
	{
		dest[i] = src[i - nd];
	}

	dest[i] = '\0'

	return (dest);
}
