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
	int f = atoi(argv[1]), s = atoi(argv[2]), sum;

	sum = f * s;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
