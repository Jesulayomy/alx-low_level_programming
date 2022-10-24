#include "main.h"

/**
 * print_rev - a fake inverse string printer
 * @s: the pointer to a string
 *
 * Return: nil
 */
void print_rev(char *s)
{
	int i, m;

	/* Count the number of elements in the array */

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	for (i = i - 1; i >= 0; i--)
	{
		m = (int) s[i];
		_putchar(m);
	}
	_putchar(10);
}
