#include "main.h"

/**
 * leet - encodes a string
 * @n: the string required
 *
 * Return: the encoded string
 */
char *leet(char *n)
{
	int a, b, l = 5;
	char r[5] = {'A', 'E', '0', 'T', 'L'};
	char s[5] = {'4', '3', '0', '7', '1'};

	while (n[a])
	{
		b = 0;

		while (b < l)
		{
			if (n[a] == r[b] || n[a] == r[b] + 32)
			{
				n[a] = s[b];
			}

			b++;
		}

		a++;
	}

	return (n);

}
