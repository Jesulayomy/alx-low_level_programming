#include <stdio.h>

/**
 * main - counts numbers 4 digits
 *
 * Return: 0 dor completion
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
	for (b = 48; b < 58; b++)
	{
		for (c = 48; c < 58; c++)
		{
			for (d = 48; d < 58; d++)
			{
				if ((c >= a) && (b < d))
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if ((a == 57) && (b == 56))
						;
					else
					{
						putchar(44);
						putchar(32);
					}
				}
				else if (c < a)
				{
					;
				}
			}
		}
	}
	}
	putchar(10);
	return (0);
}
