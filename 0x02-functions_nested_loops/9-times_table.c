#include "main.h"

/**
 * times_table - back to basic 1
 *
 * Return: none
 */
void times_table(void)
{
	int r, c, n, t, u;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			n = c * r;

			if (c > 0)
			{
				_putchar(44);
				_putchar(32);

				if (n < 10)
				{
					_putchar(' ');
				}
			}

			if (n > 9)
			{
				t = n;

				while (t >= 10)
					t = t / 10;

				u = n % 10;

				_putchar(t + 48);
				_putchar(u + 48);
			}
			else
			{
				_putchar(n + 48);
			}
		}
		_putchar(10);
	}
}
