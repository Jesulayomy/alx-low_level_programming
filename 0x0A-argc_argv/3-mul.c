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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
