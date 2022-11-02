#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number
 *
 * Return: int root or an error
 */
int _sqrt_recursion(int n)
{
	int find;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		for (find = 0; find <= n; find++)
		{
			if ((find * find) == n)
			{
				return (find);
			}
		}
	}

	return (-1);
}
