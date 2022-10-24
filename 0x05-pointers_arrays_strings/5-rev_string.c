#include "main.h"

/**
 * rev_string - used to reverse strings
 * @s: pointer to a character
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int n = strlen(s);
	int i;
	char tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = tmp;
	}
}
