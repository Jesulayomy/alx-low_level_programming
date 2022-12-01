#include "main.h"

/**
 * binary_to_uint - converts a string to an unsigned integer binary number
 * @b: the binary number as a string literal
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i, *num;
	int len;
	char *c;

	if (b == NULL)
		return (0);

	len = strlen(b);
	num = malloc(sizeof(unsigned int) * (len + 1));

	for (i = 0; b[i] != '\0'; i++)
		num[i] = b[i];

	num[i] = '\0';

	for (i = 1, len -= 1; len >= 0; len--)
	{
		c = b[len];
		dec += (atoi(c)) * i;
		i *= 2;
	}

	return (dec);
}
