#include "main.h"

/**
 * print_square - prints a square using #
 * @size: - the size of the square. 0 or less means no quare, only newline
 */
void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (r = size; r > 0; r--)
		{
			for (c = size; c > 0; c--)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
