#include "lists.h"
/**
 * insert_nodeint_at_index - puts a nose at a particular point
 * @head: the list
 * @idx: the location to add the node
 * @n: the number to insert at that node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new, *store;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		if (idx == 0)
		{
			*head = new;
			return (new);
		}
		else
			return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			store = temp->next;
			*head = new;
			new->next = store;
			return (new);
		}
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!temp->next)
			return (NULL);
		temp = temp->next;
	}
	store = temp->next;
	temp->next = new;
	new->next = store;
	*head = new;
	return (*head);
}
