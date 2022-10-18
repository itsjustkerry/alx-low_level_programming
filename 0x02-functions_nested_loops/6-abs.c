#include "main.h"

/**
* _abs-printstheabsolutevalueofaninteger
*@a: valuetobereturned
*
*Return: returnsaninteger'sabsolutevalue
*/
int _abs(int a)
{
	if (a < 0)
		return (-1 * a);
	else
		return (a);
}
