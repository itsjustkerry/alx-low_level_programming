#include "main.h"

/**
*print_alphabet-printsalphabetlowercaseletters
*
*Return: Always 0.
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
