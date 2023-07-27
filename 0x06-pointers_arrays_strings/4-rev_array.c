#include "main.h"

/**
 * reverse_array -function that reverses the content of an array of integers.
 *
 * @a: a pointer to the 1st integer in the array.
 * @n: the size of the array.
 *
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
