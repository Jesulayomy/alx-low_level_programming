#include "main.h"

/**
 * print_array - writes an arr to output
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (t == 0)
		{
			printf("%d", a[t]);
		}
		else
		{
			printf(", %d", a[t]);
		}
	}
	printf("\n");
}
