#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - check the code.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isdigit(argv[argc]) != 0)
		{
			sum +=  atoi(argv[argc]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
