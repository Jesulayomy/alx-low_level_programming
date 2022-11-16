#include "3-calc.h"

/**
 * get_op_func - gets the operation to perform
 * @argv2: operation entered
 *
 * Return: a pointer to the appropriate operation
 */
int (*get_op_func(char *argv2))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, argv2) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
