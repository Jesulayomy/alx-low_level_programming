#include "dog.h"

/**
 * free_dog - frees a dog and send it to the ranch
 * @d: the dog structure
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
