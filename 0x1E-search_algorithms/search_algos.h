#ifndef search_H_
#define search_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int advanced_binary(int *, size_t, int);
int binary_search(int *, size_t, int);
int exponential_search(int *, size_t, int);
int interpolation_search(int *, size_t, int);
int jump_search(int *, size_t, int);
int linear_search(int *, size_t, int);

#endif
