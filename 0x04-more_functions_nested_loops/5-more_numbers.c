#include "main.h"

/**
 *more_numbers- prints the numbers 10 times
 *
 *Return: numbers 0 - 14
 */
void more_numbers(void)
{
	int k, a;

	for (a = '0'; a <= '9'; a++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar((k / 10) + '0');
			}
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
