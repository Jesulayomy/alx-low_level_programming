#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints a times table of given number
 * @n: the number to be printed
 *
 * Return: returns nothing
 */
void print_times_table(int n)
{
	int l, j, k;

	if (n >= 0 && n <= 15)
	{
		for (l = 0; l <= n; l++)
		{
		for (j = 0; j <= n; j++)
		{
			k = j * l;
			if (j != 0)
			{
				printf(", ");
				if (k < 100)
					printf(" ");
				if (k < 10)
					printf(" ");
			}
			printf("%d", k);
		}
		printf("\n");
		}
	}
}
