#include "lists.h"

/**
 * free_dlistint -  frees a doubly linked list
 * @head: of the list to be freed
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
