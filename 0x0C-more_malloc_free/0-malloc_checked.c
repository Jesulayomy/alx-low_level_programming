#include "main.h"

/**
 * malloc_checked - checks that the proper value is allocated
 * @b: the size to be allocated
 *
 * Return: 98 at unsuccessful exit
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
