#include "main.h"

/**
 *_isdigit- checks if digit is between 0 to 9.
 *@c: character to be checked.
 *
 *Return: 1 if c is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
