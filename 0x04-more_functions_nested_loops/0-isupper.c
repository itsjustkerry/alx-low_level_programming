#include "main.h"

/**
 * _isupper- checks if letter is uppercase
 *@c: character to be checked.
 *
 * Return: 1 if letter is uppercase otherwise return 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
