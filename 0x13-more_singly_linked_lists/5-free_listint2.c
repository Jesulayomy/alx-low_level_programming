#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: a pointer to the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *second, *temp = *head;

	if (*head == NULL)
		return;

	if (*head)
	{
		while (temp->next)
		{
			second = temp;
			temp = temp->next;
			free(second);
		}
		free(temp);
	}

	*head = NULL;
}
