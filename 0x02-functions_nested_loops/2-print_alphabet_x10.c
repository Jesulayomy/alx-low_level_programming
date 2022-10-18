#include "main.h"

/**
 * print_alphabet_x10 - This program uses only putchar with ascii values
 *
 * Return: no return value
 */

void print_alphabet_x10(void)
{
	int n, p;

	for (p = '0'; p <= '9'; p++)
	{
	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar(10);
	}
}
