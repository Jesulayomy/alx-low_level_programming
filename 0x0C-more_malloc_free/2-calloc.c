#include "main.h"

/**
 * _calloc - allocating memory for an array
 * @nmemb: number of element
 * @size: size of each element
 *
 * Return: at successful exit
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < nmemb; a++)
		p[a] = '0';

	return (p);
}
