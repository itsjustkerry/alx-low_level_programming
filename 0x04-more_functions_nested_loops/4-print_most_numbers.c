#include "main.h"

/**
 *print_most_numbers- prints zero to nine without two and four
 *
 *Return: 0 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
	if (a != '2' && a != '4')
		_putchar(a + '0');
	a++
	}
	_putchar('\n');
}
