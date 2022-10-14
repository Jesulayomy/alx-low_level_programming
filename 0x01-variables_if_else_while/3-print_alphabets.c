#include <stdio.h>

/**
 * main - alphabet printing code
 *
 * Return: 0 for a sucessful run
 */
int main(void)
{
	int lowerC = 97;
	int UpperC = 65;

	while (lowerC < 123)
	{
		putchar(lowerC);
		lowerC++;
	}

	while (UpperC < 91)
	{
		putchar(UpperC);
		UpperC++;
	}

	putchar(10);

	return (0);
}
