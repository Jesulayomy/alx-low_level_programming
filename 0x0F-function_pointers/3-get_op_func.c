#include "3-calc.h"

/**
 * get_op_func - gets the operation to perform
 * @s: operation entered
 *
 * Return: a pointer to the appropriate operation
 */
int (*get_op_func(char *s))(int a, int b)
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
	while (ops[i])
	{
		if ((op[i][0]) == (char *s))
			return (op[i][1](a, b));
		i++;
	}

	return (NULL);
}
