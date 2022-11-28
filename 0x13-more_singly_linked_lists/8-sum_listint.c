#include "lists.h"

/**
 * sum_listint - prints a list of elements of a listint_t list
 * @head: the pointer to a listint_t
 *
 * Return: the sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int sum_nodes = 0;

	while (head != NULL)
	{
		sum_nodes += head->n;
		head = head->next;
	}

	return (sum_nodes);
}
