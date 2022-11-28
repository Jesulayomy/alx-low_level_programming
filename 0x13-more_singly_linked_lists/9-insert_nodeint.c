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
	listint_t *temp = *head, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL || temp == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
