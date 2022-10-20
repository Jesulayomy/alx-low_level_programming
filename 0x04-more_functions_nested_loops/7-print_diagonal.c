#include "main.h"

/**
 * print_diagonal - prints backslashesbruh
 * @n: - number/length of spaces in \'s
 */
void print_diagonal(int n)
{
	int l, k;

	for (l = n; l > 0; l--)
	{
		for (k = l; (n - k) > 0; k++)
		{
			if ((n - l) == 0)
			{
				;
			}
			else
			{
				_putchar(' ');
			}
		}
			_putchar(92);
			_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
