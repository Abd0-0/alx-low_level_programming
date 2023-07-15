#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i <= 102)

	{
		if (i == 58)

		{
			i = i + 39;
		}

		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
