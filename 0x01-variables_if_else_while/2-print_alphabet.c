#include <stdio.h>

/**
 * main - alphabet printing code
 *
 * Return: 0 for a sucessful run
 */
int main(void)
{
	int alphab = 97;

	while (alphab < 123)
	{
		putchar(alphab);
		alphab++;
	}

	putchar(10);

	return (0);
}
