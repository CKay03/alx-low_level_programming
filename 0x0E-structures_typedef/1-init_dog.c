#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - intiliazes a variable type struct dog
 * @d: pointer to struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (q == NULL)
	q = malloc(sizeof(struct dog));
	q->name = name;
	q->age = age;
	q->owner = owner;
}
