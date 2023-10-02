#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int f = atoi(argv[1]), s = atoi(argv[2]), sum;

		sum = f * s;

		printf("%d\n", sum);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

}
