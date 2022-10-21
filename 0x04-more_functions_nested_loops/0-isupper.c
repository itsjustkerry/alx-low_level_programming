#include "main.h"

/**
 * _isupper- checks if letter is uppercase and returns 1 otherwise returns 0
 *@c: character to be checked.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int c;

	if (c >= 'A' || 'Z')
		putchar("1", c);
	else
		putchar("0", c);
	putchar("\n");

	return (0);
}
