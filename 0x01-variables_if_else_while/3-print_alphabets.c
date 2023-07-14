#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')

	{
		putchar(alpha);
		alpha++;
	}
	char beta = 'A';

	while (beta <= 'Z')
	{
		putchar(beta);
		beta++;
	}
	putchar('\n');
	return (0);
}
