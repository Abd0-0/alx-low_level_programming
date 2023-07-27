#include <stdio.h>
#include <string.h>

/**
 * _strcat -  a function that concatenates two strings.
 *
 * @dest: a pointer to the destination string[0].
 * @src: a pointer to the string[0] that will append at the end of dest.
 *
 * Return: a pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, nd, ns;

	nd = strlen(dest);
	ns = strlen(src);

	for (i = nd; i <= nd + ns; i++)
	{
		dest[i] = src[i - nd];
	}

	return (dest);
}
