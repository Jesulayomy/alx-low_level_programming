#include <stdio.h>
#include "main.h"

void print_fibonacci(int);

/**
 * main - requests the sequence
 *
 * Return: ret 0 when done
 */
int main(void)
{
	int m = 50;

	print_fibonacci(m);

	return (0);
}

/**
 * print_fibonacci - prints out the fibonacci sequence of numbers
 * @i: the input number
 *
 * Return: returns nothing
 */
void print_fibonacci(int i)
{
	int a;
	long int w;
	long int l = 2;
	long int p = 1;

	printf("%ld, %ld, ", p, l);

	for (a = 3; a <= i; a++)
	{
		w = p + l;

		printf("%ld", w);

		if (a != i)
			printf(", ");

		p = l;
		l = w;
	}
	printf("\n");
}
