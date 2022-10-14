#include <stdio.h>

/**
 * main - the body of my code
 *
 * Return: 0 for sucess
 */
int main(void)
{
	int lowerC = 97;

	while (lowerC < 123)
	{
		if (lowerC == 113 || lowerC == 101)
		{
			lowerC++;
		}

	putchar(lowerC);
	lowerC++;
	}

	putchar(10);

	return (0);
}
