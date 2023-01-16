#include "dog.h"

/**
 * init_dog - initialize the members of a dog structure
 * @d: the dog structure to init
 * @name: name input for dog's name
 * @age: age input for dog's age
 * @owner: owner input for dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
