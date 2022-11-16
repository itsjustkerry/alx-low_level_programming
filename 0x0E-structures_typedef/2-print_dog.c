#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints the dog name,age and owner
 * @d: item to print
 *
 * Return: nil if elements are null and nothing if d is null
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
