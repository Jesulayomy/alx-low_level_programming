#include "lists.h"

/**
 * add_dnodeint - adds a node to a double linked list
 * @head: a pointer to the head of th elist
 * @n: numebr to add at the node
 * Return: the number of nodes in th elist
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;

	new->next = *head;
	*head = new;

	return (new);
}
