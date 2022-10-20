#include <stdio.h>
#include <math.h>

/**
 * main - prime number
 * Return: 0
 */
int main(void)
{
	int i;

	long int n = 612852475143;
	long int org = n;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	for (i = 3; i <= sqrt(org); i = i + 2)
	{
		while ((n % i) == 0)
		{
			n = n / i;
		}
	}
	printf("%ld\n", n);

	return (0);
}
