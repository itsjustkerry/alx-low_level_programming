#include "dog.h"

/**
 * init_dog - initializes dog
 * @d: pointer to dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
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
