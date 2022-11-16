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
	int a1, a3, n;
	char a2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	r = get_op_func(argv[2]);
	if (!r)
	{
		printf("Error\n");
		exit(99);
	}
	a1 = atoi(argv[1]);
	a2 = *argv[2];
	a3 = atoi(argv[3]);

	if ((a2 == 47 || a2 == 37) && a3 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	n = r(a1, a3);
	printf("%d\n", n);
	return (0);
}
