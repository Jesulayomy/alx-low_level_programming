#include "main.h"

/**
 * string_toupper  - switch lower to uppercase!
 * @n: the stirng to be adjusted
 * Return: teh string back
 */
char *string_toupper(char *n)
{
	int up = 'a' - 'A';
	int i;

	for (i = 0; n[i]; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= up;
		}
	}

	return (n);

}
