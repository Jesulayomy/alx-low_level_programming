#include "main.h"

/**
 * print_number - collects a number and displays it to the screen
 * @n: - the said number
 */
void print_number(int n)
{
	int th, h, t, u;

	if (n < 0)
	{
		n = -n;
		_putchar(45);
	}

	if (n < 10)
	{
		u = n;
		_putchar(u + 48);
	}
	else if (n < 100)
	{
		t = n / 10;
		u = n % 10;
		_putchar(t + 48);
		_putchar(u + 48);
	}
	else if (n < 1000)
	{
		h = n / 100;
		t = ((n / 10) % 10);
		u = n % 10;
		_putchar(h + 48);
		_putchar(t + 48);
		_putchar(u + 48);
	}
	else if (n < 10000)
	{
		th = n / 1000;
		h = ((n / 100) % 10);
		t = (n / 10) % 10;
		u = n % 10;
		_putchar(th + 48);
		_putchar(h + 48);
		_putchar(t + 48);
		_putchar(u + 48);
	}
}
