#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2)
