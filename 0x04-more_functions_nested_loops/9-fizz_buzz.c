#include "main.h"
#include <stdio.h>

/**
 * main - the popular question
 *
 * Return: 0 for complete
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
