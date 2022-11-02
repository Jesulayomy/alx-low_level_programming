#include "main.h"

/**
 * _sqrt_recur - finds the square root of a number
 * @num: the number
 * @find: our counter
 * Return: int root or an error
 */
int _sqrt_recur(int num, int find)
{
	if  ((find * find) == num)
	{
		return (find);
	}
	else if ((find * find) > num)
	{
		return (-1);
	}

	return (_sqrt_recur(num, find + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: the number
 *
 * Return: int root or an error
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recur(n, 0));
}
