#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square mat
 * @a: pointer to the mat
 * @size: size of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
		int i, forw = 0, backw = 0;

		for (i = 0; i < size * size; i++)
		{
			if (i % (size + 1) == 0)
			{
				forw += a[i];
			}
			if (i != 0 && i % (size - 1) == 0 && i < (size * size) - size + 1)
			{
				backw += a[i];
			}
		}

		printf("%d, %d\n", forw, backw);
}
