#include "lists.h"

/**
 * pop_listint - removes the head node from a listint list
 * @head: the list to perform the action on
 *
 * Return: The value of the head removed
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head, *second;
	int head_num = temp->n;

	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		second = temp;
		temp = temp->next;
		free(second);
		*head = temp;
	}

	return (head_num);
}
