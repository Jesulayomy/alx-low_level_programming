#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to head
 * @index: index of node
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int num = 0;

	while (temp)
	{
		if (num == index)
			return (temp);
		num++;
		temp = temp->next;
	}
	return (NULL);
}
