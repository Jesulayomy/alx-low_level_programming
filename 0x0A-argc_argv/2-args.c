#include <stdio.h>

/**
 * main - prints program name
 * @argc: no of args
 * @argv: pointer to arguments
 *
 * Return: 0 at exit
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
