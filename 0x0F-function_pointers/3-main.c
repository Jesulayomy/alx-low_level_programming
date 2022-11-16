#include "3-calc.h"

/**
 * main - calls the func
 * @argc: no of args
 * @argv: string pointer to arguments
 *
 * Return: the result of an operation
 */
int main(int argc, char *argv[])
{
	int (*r)(int, int);
	int n;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	r = get_op_func((argv[2]));
	if (r == -1)
	{
		printf("Error\n");
		exit(99);
	}

	n = r(atoi(argv[1]), atoi(argv[2]));
	if (n == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", n);

	return (0);
}
