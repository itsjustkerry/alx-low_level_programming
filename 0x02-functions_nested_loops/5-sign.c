#include "main.h"

/**
*print_sign-printsthesignofanumber.
*@n: charactertobechecked.
*
*Return: 1ifgreaterthanzero,0ifzeroand-1ifnegative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(''0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
