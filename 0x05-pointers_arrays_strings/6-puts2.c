#include "main.h"

/**
 * puts2 - a fake helf string printer
 * @str: the pointer to a string
 *
 * Return: nil
 */
void puts2(char *str)
{
	int i = 0;
	int s;

	while ((str[i] != '\0') || (str[i] != '\\'))
	{
		s = (int) str[i];
		i += 2;
		_putchar(s);
	}
	_putchar(10);
}
