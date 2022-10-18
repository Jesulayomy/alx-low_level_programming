#include "main.h"

/**
 * print_alphabet - prints letters
 *
 * Return: no return
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
