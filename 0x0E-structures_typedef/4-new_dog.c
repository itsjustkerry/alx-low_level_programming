#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 *
 * Return: null if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *new;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->age = age;
	new->name = malloc(sizeof(new->name) * i);
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);

	}
	for (k = 0; k <= i; k++)
		new->name[k] = name[k];
	new->owner = malloc(sizeof(new->owner) * j);
	if (new->owner == NULL)
	{
		free(new->owner);
		free(new->name);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		new->owner[k] = owner[k];

	return (new);
}
