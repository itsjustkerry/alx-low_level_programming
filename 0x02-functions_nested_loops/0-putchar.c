#include "main.h"

/**
*main-printstheline_putchar.
*
*Return: Always 0.
*/
int main(void)
{
	char *k = "_putchar";

	while (*k)
	{
		_putchar(*k);
		k++
	}
	_putchar("\n");

	return (0);
}
