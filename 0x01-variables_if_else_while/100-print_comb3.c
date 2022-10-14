#include <stdio.h>

/**
 * main - main code
 *
 * Return: 0 for successful
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a < 58; a++)
	{

		for (b = 48; b < 58; b++)
		{
			if ((a > b) || (a == b))
			{
				;
			}
			else
			{
				putchar(a);
				putchar(b);
				if (a != 56)
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

	putchar(10);

	return (0);
}

