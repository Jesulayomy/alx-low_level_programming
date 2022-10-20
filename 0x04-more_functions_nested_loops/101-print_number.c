#include "main.h"

/**
 * print_number - collects a number and displays it to the screen
 * @n: - the said number
 */
void print_number(int n)
{
	unsigned m;

	if (n < 0)
	{
		m = -n;
		_putchar(45);
	}
	else
	{
		m = n;
	}

	if (m / 10)
	{
		print_number(m / 10);
	}

	_putchar((m % 10) + 48);
}
