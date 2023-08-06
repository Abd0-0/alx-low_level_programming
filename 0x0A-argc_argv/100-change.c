#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void coins(int cents);

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
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}

	else
	{
		cents = atoi(argv[1]);
		coins(cents);
	}

	return (0);
}

/**
 * coins - prints the minimum number of coins.
 *
 * @cents: an amount of money.
 */

void coins(int cents)
{
	int coins = 0;

	if (cents >= 25)
	{
		coins = cents / 25;
		cents = cents % 25;
	}

	if (cents >= 10)
	{
		coins += cents / 10;
		cents = cents % 10;
	}

	if (cents >= 5)
	{
		coins += cents / 5;
		cents = cents % 5;
	}

	if (cents >= 2)
	{
		coins += cents / 2;
		cents = cents % 2;
	}

	if (cents == 1)
	{
		coins++;
	}

		printf("%i\n", coins);
}
