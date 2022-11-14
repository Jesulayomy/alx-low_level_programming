#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog?
 * @d: dog to print
 *
 * Return: non
 */
void print_dog(struct dog *d)
{
	char *nul = "(nil)";

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %s\n", nul);
	else
		printf("Name: %s\n", (*d).name);

	if (d->age >= 0)
		printf("Age: %f\n", (*d).age);
	else
		printf("Age: %s\n", nul);

	if (d->owner == NULL)
		printf("Owner: %s\n", nul);
	else
		printf("Owner: %s\n", (*d).owner);

}
