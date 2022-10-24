#include "main.h"

/**
 * puts2 - a fake half string printer
 * @str: the pointer to a string
 *
 * Return: nil
 */
void puts2(char *str)
{
	int i = 0;
	int n;

	for (n = 0; str[n] != 0; n++)
	{
	}

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}
