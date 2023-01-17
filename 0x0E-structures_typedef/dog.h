#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure for dogs
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: A structure which defines all we
 * need to identify a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
