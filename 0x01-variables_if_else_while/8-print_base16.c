#include <stdio.h>

/**
 * main - hex number printer
 *
 * We rill use ascii along with putchar and ints
 *
 * Return: 0 no errors
 */
int main(void)
{
	int hexnum = 48;
	int hexlet = 97;

	while (hexnum < 58)
	{
		putchar(hexnum);
		hexnum++;
	}

	while (hexlet < 103)
	{
		putchar(hexlet);
		hexlet++;
	}

	putchar (10);

	return (0);
}
