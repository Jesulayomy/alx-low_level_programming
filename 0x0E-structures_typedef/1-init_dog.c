#include "dog.h"

/**
 * init_dog - creates a dog
 * @d: uh pointer to dog?
 * @name: of dog
 * @age: of le dog
 * @owner: of the dog
 *
 * Return: nil
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
