#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int intg;
	char *c;

	intg = 1;
	c = (char *)&intg;

	return ((int)*c);
}
