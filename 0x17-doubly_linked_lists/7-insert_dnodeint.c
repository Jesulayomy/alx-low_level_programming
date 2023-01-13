#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: pointer to the head
 * @idx: index to add the node
 * @n: number in the node
 *
 * Return: addr of newnode or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;
	unsigned int i = 0;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		for (; i < idx - 1; i++)
		{
			if (temp == NULL)
				return (NULL);
			temp = temp->next;
		}

		if (temp->next == NULL)
			new = add_dnodeint_end(h, n);
		else
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->prev = temp;
			new->next = temp->next;
			temp->next->prev = new;
			temp->next = new;
		}
	}

	return (new);
}
