#include "main.h"

/**
 * is_prime - checks for prime
 * @num: the no to check
 * @count: a counter starting from 2 upwards
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime(int num, int count)
{
	if (num == count)
	{
		return (1);
	}
	else if ((num % count) == 0)
	{
		return (0);
	}

	return (is_prime(num, count + 1));
}

/**
 * is_prime_number - checks for prime
 * @n: the no to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime(n, 2));
}
