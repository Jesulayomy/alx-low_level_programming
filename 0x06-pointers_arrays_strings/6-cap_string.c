#include "main.h"

/**
 * cap_string - capitalizes the words in a string.
 * @n: the string in question
 *
 * Return: the camel string
 */
char *cap_string(char *n)
{
	int up = 'a' - 'A';	/* Difference between lower and uppercase */
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] == 32) || (n[i] == '\t')|| (n[i] == '\n')|| (n[i] == ',')|| (n[i] == ';'))
		{
			if ((n[i + 1] >= 'a') && (n[i + 1] <= 'z'))
			{
				n[i + 1] -= up;
			}
		}
		else if ((n[i] == '.')|| (n[i] == '!')|| (n[i] == '?')|| (n[i] == '"'))
		{
			if ((n[i + 1] >= 'a') && (n[i + 1] <= 'z'))
			{
				n[i + 1] -= up;
			}
		}
		else if ((n[i] == '(')|| (n[i] == ')')|| (n[i] == '{')|| (n[i] == '}'))
		{
			if ((n[i + 1] >= 'a') && (n[i + 1] <= 'z'))
			{
				n[i + 1] -= up;
			}
		}
	}

	return (n);
}
