#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: the program name.
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
