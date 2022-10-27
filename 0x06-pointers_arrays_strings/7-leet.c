#include "main.h"

/**
 * leet - encodes a string
 * @n: the string required
 *
 * Return: the encoded string
 */
char *leet(char *n)
{
	int i, j;

	int tokens[] = {65, 69, 79, 84, 76};
	int repl[] = {4, 3, 0, 7, 1};
	int tokens_len = 5;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < tokens_len; j++)
		{
			if (n[i] == tokens[j] || n[i] == tokens[j] + 32)
				n[i] = repl[j] + 48;
		}
	}

	return (n);
}
