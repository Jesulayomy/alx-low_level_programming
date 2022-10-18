#include <stdio.h>

void print_numbers(int);

/**
 * main - requests print_numbers
 *
 * Return: returns 0
 */
int main(void)
{
	int m = 1024;

	print_numbers(m);

	return (0);
}

/**
 * print_numbers - prints sum of multiples of 5 and 3
 * @i: number
 *
 * Return: no return value
 */
void print_numbers(int i)
{
	int x;
	int sum = 0;

	for (x = 0; x < i; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			sum += x;
		}
	}

	printf("%d\n", sum);
}
