#include "lists.h"

/**
 * reverse_listint - reverses a list int
 * @head: the list
 *
 * Return: a pointer to the first node of the reveresd list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;

		*head = next;
	}

	*head = before;

	return (*head);
}
