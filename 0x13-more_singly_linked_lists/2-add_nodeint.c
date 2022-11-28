#include "lists.h"

/**
 * add_nodeint - adds a node to the begining of a list
 * @head: the address of the list to add
 * @n: the value of n to be placed in the list node
 *
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp;

	*head = new;

	return (*head);
}
