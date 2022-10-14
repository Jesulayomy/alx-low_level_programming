#include <stdio.h>

/**
 * main - Alphabet in reverse
 *
 * Return: 0 for sucessful
 */
int main(void)
{
	int ralpha = 122;

	while (ralpha > 96)
	{
		putchar(ralpha);
		ralpha--;
	}

	putchar(10);

	return (0);
}
