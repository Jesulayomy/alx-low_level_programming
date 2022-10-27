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
	char low[] = "aeotl";
	char l3t[] = "43071";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 5 ; j++)
		{
			if (n[i] == low[j] || n[i] == low[j - 32])
			{
				n[i] = l3t[j];
			}
		}
	}

	return (n);
}
