#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: the address of the current head
 * @n: the value to be added to the node
 *
 * Return: the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	/* declaring a new node */
	listint_t *temp = *head;
	/* setting a temp node to be the entire content of head */

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
