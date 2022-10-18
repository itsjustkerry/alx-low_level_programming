#include "main.h"

/**
*print_alphabet_x10-printsalphabet10times.
*
*Return: x10a-z
*/
void print_alphabet_x10(void)
{
	int k, s;

	s = 0;

	while (s < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
	}
	s++;
	_putchar('\n');
	}
}
