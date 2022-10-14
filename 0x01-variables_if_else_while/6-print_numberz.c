#include <stdio.h>

/**
 * main - number printing
 *
 * Return: 0 for success
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar(10);

	return (0);
}
