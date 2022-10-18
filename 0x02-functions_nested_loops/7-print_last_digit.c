#include "main.h"

/**
 * print_last_digit - gets the last digit using mod
 * @n: - a parameter to collect input
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int j = n % 10;

	if (j >= 0)
	{
		_putchar(j + 48);
		return (j);
	}
	else
	{
		_putchar(-j + 48);
		return (-j);
	}
}
