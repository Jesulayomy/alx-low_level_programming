#include "main.h"

/**
 * _puts_recursion - puts each character in a string
 * @s: el string
 */

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[n]);
		_puts_recursion(s + 1);
	}
}
