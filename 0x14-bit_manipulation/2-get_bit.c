#include "main.h"

/**
 * get_bit - gets the bit value at a given index
 * @n: the integer num to work on
 * @index: the index
 *
 * Return: the value or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int w;

	for (w = 0; w <= 64; w++)
	{
		if (index == w)
			return (n & 1);
		n = n >> 1;
	}

	return (-1);
}
