#include "main.h"

/**
 * print_diagsums -  a function that prints the sum of
 *  the two diagonals of a square matrix of integers.
 *
 *  @a: a pointer to an array of integer.
 *  @size: The size of the array.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - i];
	}
}
