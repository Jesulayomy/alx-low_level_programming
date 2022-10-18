#include <stdio.h>

/**
 * main - prints out the sum offibonacci numbers, but even
 *
 * Return: 0, successful
 */
int main(void)
{
	int a;
	long int x, y, z, sum;

	x = 1;
	y = 2;
	sum = 2;

	for (a = 0; a <= 30; a++)
	{
		if (y > 4000000)
			break;

		z = x + y;
		if (z % 2 == 0)
			sum += z;

		x = y;
		y = z;
	}
	printf("%ld\n", sum);

	return (0);
}
