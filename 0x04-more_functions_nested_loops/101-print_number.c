#include "main.h"

/**
 * print_number - collects a number and displays it to the screen
 * @n: - the said number
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}
