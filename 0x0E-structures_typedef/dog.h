#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines data type dog
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Return: Always 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
