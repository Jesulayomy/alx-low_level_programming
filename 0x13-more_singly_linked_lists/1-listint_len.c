#include "lists.h"

/**
 * listint_len - counts elements of a listint_t list
 * @h: the pointer to a listint_t
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
