#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char s[] = {"and that piece of art is useful\" - Dora Korpar, 2015-10-19"};

	int n = strlen(s);
	int i = 0;

	/* while loop */
	while (i != n)
		{
			putchar(s[i]);
			i++;
		}

	putchar('\n');
	return (1);
}
