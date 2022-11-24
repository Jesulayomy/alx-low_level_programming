#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the starting func
 *
 * Return: non
 */
void free_list(list_t *head)
{
	list_t *temp = head, *second;

	while (temp->next)
	{
		second = temp;
		temp = temp->next;
		free(second->str);
		free(second);
	}	
	free(temp->str);
	free(temp);
}
