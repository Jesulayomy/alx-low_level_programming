#include "lists.h"

/**
 * pop_listint - removes the head node from a listint list
 * @head: the list to perform the action on
 *
 * Return: The value of the head removed
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int head_num;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	head_num = temp->n;
	free(temp);

	return (head_num);
}
