#include "3-calc.h"

/**
 * get_op_func - gets the operation to perform
 * @s: operation entered
 *
 * Return: a pointer to the appropriate operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	int (*ptr_to_op)(int, int);
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
	while (i < 5)
	{
		if (s == ops[i].op)
		{
			ptr_to_op = ops[i].f;
			return (ptr_to_op);
		}
		i++;
	}

	return (-1);
}
