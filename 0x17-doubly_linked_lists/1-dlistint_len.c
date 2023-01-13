#include "lists.h"

/**
 * dlistint_len - returns the len of a double linked list
 * @h: a pointer to the head of th elist
 * Return: the number of nodes in th elist
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
