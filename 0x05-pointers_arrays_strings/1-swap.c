#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: integer pointer
 * @b: integer pointer
 * Return: no value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
