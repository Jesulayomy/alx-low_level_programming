#include "main.h"

/**
 * more_numbers - prints 0-14 * 10
 */
void more_numbers(void)
{
	int n, m, o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + 48);
			}
			o = n % 10;

			_putchar(o + 48);
		}
		_putchar(10);
	}
}
