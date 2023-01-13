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
	dlistint_t *temp;

	if (*head == NULL)
	{
		temp = malloc(sizeof(dlistint_t));
		temp->n = n;
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
		return (*head);
	}

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp->prev = new;
	new->next = temp;
	new->prev = NULL;
	*head = new;

	return (*head);
}
