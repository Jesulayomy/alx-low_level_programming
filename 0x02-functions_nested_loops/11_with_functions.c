#include "main.h"

/**
 * print_to_98 - counts up or downward to 98
 * @n: - the start integer
 */
void print_to_98(int n)
{
	int m, h, t, u;

	if (n >= 98)
	{
		for (; n > 97; n--)
		{
			if (n > 99)
			{
				h = n / 100;
				t = ((n / 10) % 10);
				u = (n % 10);

				_putchar(h + 48);
				_putchar(t + 48);
				_putchar(u + 48);
			}
			else if ((n < 100) && (n > 9))
			{
				t = n / 10;
				u = n % 10;

				_putchar(t + 48);
				_putchar(u + 48);
			}

			if ((t == 9) && (u ==8))
			{
				;
			}
			else
			{
				_putchar(44);
				_putchar(32);
			}
		}
	}
	else	/* when n < 98 */
	{
		for(;n < 99; n++)
		{
			if (n < 0)
			{
				_putchar(45);
				m = -n;
			}
			else
			{
				m = n;
			}

			if ((m < 99) && (m > 9))
			{
				t = m / 10;
				u = m % 10;

				_putchar(t + 48);
				_putchar(u + 48);
			}
			else if ((m < 10) && (m >=0))
			{
				u = m;

				_putchar(u + 48);
			}

			if ((t == 9) && (u ==8))
			{
				;
			}
			else
			{
				_putchar(44);
				_putchar(32);
			}
		}

	}
	_putchar(10);
}
