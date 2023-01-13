#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a dll
 * @head: you know what it is
 * @n: data to add at the node
 * Return: the new node's address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->next = NULL;
	new->prev = temp;

	return (new);
}
