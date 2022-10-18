#include <stdio.h>
#include "main.h"

void print_fibonacci(int);

/**
 * main - sus fibonacci
 *
 * Return: zero at success
 */
int main(void)
{
	int w = 98;

	print_fibonacci(w);

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
	long int b;
	long int l = 2;
	long int p = 1;

	printf("%ld, %ld, ", p, l);

	for (a = 3; a <= i; a++)
	{
		b = p + l;

		printf("%ld", b);
		if (a != i)
			printf(", ");

		p = l;
		l = b;
	}
	printf("\n");
}
