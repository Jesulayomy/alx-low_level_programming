#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes, whatever that is
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: 0 when out
 */
int main(int argc, char *argv[])
{
	int b, i;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", a[i]);
			break;
		}

		printf("%02hhx ", a[i]);
	}

	return (0);
}
