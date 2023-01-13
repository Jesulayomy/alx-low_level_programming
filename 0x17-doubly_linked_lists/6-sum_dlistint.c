#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a dlistint_t list
 * @head: pointer to head
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int n = 0;

	if (head == NULL)
		return (0);

	while (temp)
	{
		n += temp->n;
		temp = temp->next;
	}

	return (n);
}
