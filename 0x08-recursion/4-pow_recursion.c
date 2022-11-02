#include "main.h"

/**
 * _pow_recursion - x ^ y
 * @x: the integer number
 * @y: the power
 *
 * Return: the value of n!
 */
int _pow_recursion(int x, int y)
{
	long int pow;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		pow = x * _pow_recursion(x, y - 1);
	}

	return (pow);
}
