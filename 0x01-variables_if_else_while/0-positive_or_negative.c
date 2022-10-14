#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - regular main function
 *
 * This code determines if n is positive ot negative
 *
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
