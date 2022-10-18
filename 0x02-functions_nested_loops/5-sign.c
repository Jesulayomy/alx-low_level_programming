#include "main.h"

/**
 * print_sign - checks the sign and prints it
 * @n: - integer number
 *
 * Return: 0 for 0, -1 for negative, 1 for positive
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}

}
