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

int main(int argc, char **argv)
{
	if (isdigit(*argv[1]) == 0 || isdigit(*argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
		
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
		exit(98);
	}

}
