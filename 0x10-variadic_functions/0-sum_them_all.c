#include "variadic_functions.h"

/**
 * sum_them_all - adds all te input numbers
 * @n: the number of arguments to add
 *
 * Return: the sum when complete or when n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int c;
	va_list args_add;

	if (n == 0)
		return (0);

	va_start(args_add, n);

	for (c = 0, sum = 0; c < n; c++)
		sum += va_arg(args_add, int);

	return (sum);
}
