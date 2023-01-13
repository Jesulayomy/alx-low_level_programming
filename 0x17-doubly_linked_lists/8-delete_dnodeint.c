#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts a node at an index
 * @head: pointer to the head
 * @index: index to add the node
 *
 * Return: 1 if succeed or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head, *new;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		new = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(new);
		return (1);
	}
	else
	{
		for (; i < index - 1; i++)
		{
			if (temp == NULL)
				return (-1);
			temp = temp->next;
		}
		new = temp->next;
		temp->next = temp->next->next;
		if (new->next != NULL)
			temp->next->prev = temp;
		free(new);
	}

	return (1);
}
