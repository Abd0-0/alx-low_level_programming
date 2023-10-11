#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int n1, n2, result;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(av[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(av[1]);
	n2 = atoi(av[3]);

	if ((n2 == 0) && (*av[2] == '/' || *av[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(av[2]))(n1, n2);

	printf("%d\n", result);

	return (0);
}
