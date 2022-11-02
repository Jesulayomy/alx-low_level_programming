#include "main.h"

/**
 * factorial - !
 * @n: the integer number
 *
 * Return: the value of n!
 */
int factorial(int n)
{
	long int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
	}

	return (fact);
}
