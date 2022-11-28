#include "lists.h"

/**
 * get_nodeint_at_index - gets the value of a node
 * @head: the list
 * @index: the location of the node to add
 *
 * Return: a listint_t type
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int comp = 0;
	listint_t *store;
	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp)
	{
		if (comp == index)
		{
			store = temp;
			return (store);
		}
		temp = temp->next;
		comp++;
	}

	return (NULL);
}
