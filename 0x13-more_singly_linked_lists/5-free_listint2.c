#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: a pointer to the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *second;

	if (head == NULL)
		return;

	while (*head)
	{
		second = *head;
		*head = (*head)->next;
		free(second);
	}

	head = NULL;
}
