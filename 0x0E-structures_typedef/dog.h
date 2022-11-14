#ifndef DOGH_
#define DOGH_


/**
 * struct dog - creates a dogtag
 * @name: name of doggo
 * @age: age of doggo
 * @owner: of doggo
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
