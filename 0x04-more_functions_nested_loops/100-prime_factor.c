#include <stdio.h>

/**
 * main - the starting point of thr program.
 *
 * Return: 0 (success)
 *
 * primeFactors - print the largest prime factor.
 *
 * @n: The number to get its fractols.
 */


long int primeFactors(long int n);

int main(void)
{
	printf("%ld\n", primeFactors(612852475143));

	return (0);
}


/**
 * primeFactors - print the largest prime factor.
 *
 * @n: The number to get its fractols.
 *
 * Return: the largest prime factor.
 */


long int primeFactors(long int n)
{
	long int largest = 0;

	int i;

	/* if it's an even number, so it's divisible by 2.*/
	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}


	/* n must be an odd number at this point! */
	/* so we need to divise by odd num 3, 5, 7..etc */


	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	return (largest);
}
