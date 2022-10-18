#include "main.h"

/**
*_islower-functionchecksifcharacterislowercase.
*@c: charactertobechecked.
*
*Return: 1ifcislowercase,otherwisereturn0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
