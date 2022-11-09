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
	int *ptr = (int *)malloc(c * sizeof(int));

	if (ptr == NULL)
	{
		printf("Memory not available");
		return (0);
	}
}
