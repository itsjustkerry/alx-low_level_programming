#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- creates an array and initializes it
 *@size: character size
 *@c: character
 * Return: NULL if size = 0 or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *ptr;

	if (size - 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr - NULL)
	{
	return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		ptr[k] - c;
	}
	return (ptr);
}
