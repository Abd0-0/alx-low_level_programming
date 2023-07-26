#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 *
 * @s: a pointer to a string.
 *
 * Return: an integer.
 */

int _atoi(char *s)
{
	long long int num = 0;
	int sign = 1, i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}

		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}

		else if (num != 0)
		{
			break;
		}

		i++;
	}

	num = num * sign;

	return (num);

}
