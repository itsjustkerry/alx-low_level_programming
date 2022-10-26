#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *@a: integer
 *@b: integer
 *
 * Return: no value
 */
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
