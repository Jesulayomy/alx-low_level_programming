#include <stdio.h>

/**
 * main - main code
 *
 * Return: 0 for successful
 */
int main(void)
{
	int numb;

	for (numb = 48; numb < 58; numb++)
	{
		putchar(numb);
		if (numb == 57)
		{
			break;
		}
		putchar(44);
		putchar(32);
	}

	putchar(10);

	return (0);
}

