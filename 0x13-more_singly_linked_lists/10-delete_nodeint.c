#include "lists.h"
/**
 * delete_nodeint_at_index - removes a node at a particular point
 * @head: the list
 * @index: the location to remove the node
 *
 * Return: the address of the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *up;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (; count < index - 1; count++)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
	}
	up = temp->next;
	temp->next = temp->next->next;

	free(up);

	return (1);
}
