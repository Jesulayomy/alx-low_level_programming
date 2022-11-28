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
	listint_t *temp = *head, *up;
	unsigned int count = 0;

	if (temp == NULL)
		return (NULL);

	up = malloc(sizeof(listint_t));
	up = NULL;

	while (temp != NULL)
	{
		if (count == idx)
		{
			add_nodeint_end(&up, n);
			while (temp->next != NULL)
			{
				add_nodeint_end(&up, temp->n);
				temp = temp->next;
			}

			add_nodeint_end(&up, temp->n);
			*head = up;
			return (*head);
		}

		add_nodeint_end(&up, temp->n);
		temp = temp->next;
		count++;
	}

	return (NULL);
}
