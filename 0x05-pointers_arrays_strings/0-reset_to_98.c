#include "main.h"

/**
 * reset_to_98 - collects a pointer and updates it
 * @n: a pointer
 * (int *n) refers to a pointer so there is no need to specify the address of n
 * as its done in the main task already.
 *
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int *r = n;
	*r = 98;
}
