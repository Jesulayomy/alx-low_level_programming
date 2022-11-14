#ifndef DOGH_
#define DOGH_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - creates a dogtag
 * @name: name of doggo
 * @age: age of doggo
 * @owner: of doggo
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dogtype struct
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
