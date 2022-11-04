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
	int coin = 0;
	int amount;

	if (argc == 2)
	{
		amount = atoi(argv[1]);
		while (amount >= 25)
		{
			amount -= 25;
			coin++;
		}
		while (amount >= 10)
		{
			amount -= 10;
			coin++;
		}
		while (amount >= 5)
		{
			amount -= 5;
			coin++;
		}
		while (amount >= 2)
		{
			amount -= 2;
			coin++;
		}
		while (amount >= 1)
		{
			amount -= 1;
			coin++;
		}

		printf("%d\n", coin);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
