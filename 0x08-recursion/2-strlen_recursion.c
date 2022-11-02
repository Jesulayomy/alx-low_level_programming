#include "main.h"

/**
 * _strlen_recursion - prints a string's length
 * @s: el string
 *
 * Return: the no of chars in the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return ((_strlen_recursion(s + 1)) + 1);
	}
	return (0);
}
