#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints program name
 * @argc: no of args
 * @argv: pointer to arguments
 *
 * Return: 0 at exit
 */

int main(int argc, char *argv[])
{
	int p, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (p = 1; p < argc; p++)
	{
		if (atoi(argv[p]) == 0)
		{
			;
		}
		else if (sum == (sum + atoi(argv[p])))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[p]);
		}
	}

	printf("%d\n", sum);
	
	return (0);
}
