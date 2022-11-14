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
printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
