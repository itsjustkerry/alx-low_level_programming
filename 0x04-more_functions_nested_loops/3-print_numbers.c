#include "main.h"
#include <stdio.h>

/**
 *print_numbers- prints numbers from 0 to 9
 *
 *Return: number 0 to 9
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');
	_putchar('\n');
}
