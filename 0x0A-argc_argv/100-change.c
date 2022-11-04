#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints program name
 * @argc: no of args
 * @argv: the amount to be broken down
 *
 * Return: 0 at exit
 */

int main(int argc, char *argv[])
{
	int coin;
	int amount;

	amount = atoi(*(argv + 1));
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	for (coin = 0; amount > 0; coin++)
	{
		if (amount > 25)
		{
			amount -= 25;
		}
		else if (amount > 10)
		{
			amount -= 10;
		}
		else if (amount > 5)
		{
			amount -= 5;
		}
		else if (amount > 2)
		{
			amount -= 2;
		}
		else if (amount > 1)
		{
			amount -= 1;
		}
	}

	printf("%d\n", coin);

	return (0);
}
