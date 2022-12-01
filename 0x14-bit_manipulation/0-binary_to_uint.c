#include "main.h"

/**
 * binary_to_uint - converts a string to an unsigned integer binary number
 * @b: the binary number as a string literal
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, base = 1;
	int n, len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (n = len - 1; n >= 0; n--)
	{
		if (b[n] != '1' && b[n] != '0')
			return (0);
		if (b[n] == '1')
			dec += base;

		base *= 2;
	}
	return (dec);
}
