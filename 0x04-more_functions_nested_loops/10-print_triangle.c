#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: - the size of the square. 0 or less means no quare, only newline
 */
void print_triangle(int size)
{
	int r, c, s;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (r = size; r > 0; r--)
		{
			c = size - r + 1;

			for (s = r - 1; s > 0; s--)
			{
				_putchar(' ');
			}

			for (; c > 0; c--)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
