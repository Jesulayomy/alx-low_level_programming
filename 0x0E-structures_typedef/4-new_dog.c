#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - prints a dog?
 * @name: dog to print
 * @age: of dog
 * @owner: of the dog
 *
 * Return: non
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, i;
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL || !name || !owner)
	{
		free(ndog);
		return (NULL);
	}

	name_len = strlen(name);
	owner_len = strlen(owner);

	ndog->name = malloc(name_len + 1);
	ndog->owner = malloc(owner_len + 1);

	if (!(ndog->name) || !(ndog->owner))
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		ndog->name[i] = name[i];
	ndog->name[i] = '\0';

	ndog->age = age;

	for (i = 0; i < owner_len; i++)
		ndog->owner[i] = owner[i];
	ndog->owner[i] = '\0';

	return (ndog);
}
