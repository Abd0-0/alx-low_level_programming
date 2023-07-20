#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * main function
 *
 *Description: A program that tells you if the random number is:
 * positive, or negative, or == 0.
 *
 *Return: Always 0 (Success)
 */
int main(void)          /* Returns 0 */
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
        {
                printf("%i is positive\n", n);
        }

        else if (n == 0)
        {
                printf("%i is zero\n", n);
        }

        else
                printf("%i is negative\n", n);

        return (0);
}
