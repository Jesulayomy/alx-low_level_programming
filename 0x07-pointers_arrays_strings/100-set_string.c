#include "main.h"

/**
 * set_string - sets the value of a pointerto an address) to a char
 * @s: the pointer
 * @to: the string/char
 *
 * Return: none
 */
void set_string(char **s, char *to)
{
	*s = to;
}
