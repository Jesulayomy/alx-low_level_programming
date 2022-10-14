#include <stdio.h>

/**
 * main - 3 digit combinations
 *
 * Return: 0 for completion
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 58; a++)
	{
	for (b = 48; b < 58; b++)
	{
		if ((a > b) || (a == b))
			;
		else
		{
		for (c = 48; c < 58; c++)
		{
			if ((b > c) || (b == c))
				;
			else
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
					;
				}
			}
		}
		}
	}
	}
	putchar(10);

	return (0);
}
