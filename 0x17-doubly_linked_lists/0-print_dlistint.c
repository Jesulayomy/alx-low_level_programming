#include "lists.h"

/**
 * print_dlistint - prints a souble linked list
 * @h: a pointer to the head of th elist
 * Return: the number of nodes in th elist
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
