#include "lists.h"

/**
 * print_listint_safe - prints a listint_t list safely
 * @head: th elist to print
 *
 * Return: no of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	int *addr;

	if (!head)
		exit(98);

	while (head != NULL)
	{
		if (addr <= &head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			nodes++;
			return (nodes);
		}
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			addr = &head;
			nodes++;
			head = head->next;
		}
	}

	return (nodes);

}
