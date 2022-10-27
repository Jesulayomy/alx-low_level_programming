#include "main.h"

/**
 * rot13 - rotates
 * @w: the input
 *
 * Return: the encoded input
 */
char *rot13(char *w)
{
	int i, r;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; w[i] != '\0'; i++)
	{
		for (r = 0; a[r] != '\0';)
		{
			if (w[i] == a[r])
			{
				w[i] = b[r];
				break;
			}
			else
			{
				r++;
			}
		}
	}

	return (w);
}
