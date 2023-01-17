#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct 'dog'
 * @d: The struct 'dog' to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: %s\n", "(nil)");

	if (d->age == 0.0f)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: %s\n", "(nil)");

	if (d->owner == NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: %s\n", "(nil)");
}
