#include "main.h"

/**
 * _puts - a fake stringg printer
 * @str: the pointer to a string
 *
 * Return: nil
 */
void _puts(char *str)
{
	int i;
	char *s;

	for (; str[i]; i++)
	{
		*s = *str[i];
		_putchar(*s);
	}
}
