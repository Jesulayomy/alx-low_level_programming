#include "main.h"

/**
 * puts2 - a fake helf string printer
 * @str: the pointer to a string
 *
 * Return: nil
 */
void puts2(char *str)
{
	int i;
	int s;

	for (i = 0; str[i]; i++)
	{
		s = (int) str[i];
		i++;
		_putchar(s);
	}
	_putchar(10);
}
