#include "main.h"

/**
 * _strlen_recursion - prints a string's length
 * @s: el string
 *
 * Return: the no of chars in the string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
		_strlen_recursion(s + n);
	}

	return (n);
}
