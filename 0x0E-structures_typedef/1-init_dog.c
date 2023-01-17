#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: A pointer to the predefined struct dog
 * @name: The name to initialize the struct d to
 * @age: The age to initiilize the struct d to
 * @owner: The owner to initialize the struct d to
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
