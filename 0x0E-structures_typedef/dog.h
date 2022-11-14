#ifndef DOGH_
#define DOGH_


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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
