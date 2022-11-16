#include "function_pointers.h"

/**
 * print_name - prints a string
 * @name: name of string
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
}
