#include "lists.h"

/**
 * free_listint - frees a list
 * @head: a pointer to the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *second, *temp = head;

	if (head)
	{
		while (temp->next)
		{
			second = temp;
			temp = temp->next;
			free(second);
		}

		free(temp);
	}
}
