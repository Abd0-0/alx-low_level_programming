#include <stdio.h>
#include "main.h"

long int primeFactors(long int n)
{
	long int largest;
	
	/* if it's an even number, so it's divisible by 2.*/
	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}

	int odd;

	/* n must be an odd number at this point! */
	/* so we need to divise by odd num 3, 5, 7..etc */
	for (odd = 3; odd * odd <= n; odd = odd + 2)
	{
		while (n % odd)
		{
			largest = odd;
			n = n / odd;
		}
	}

	if (n > 2)
	{
		largest = n;
	}

	return (largest);
}
