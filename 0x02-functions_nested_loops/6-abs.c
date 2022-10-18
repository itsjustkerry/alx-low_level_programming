#include "main.h"
#include <stdio.h>

/**
*_abs-printsabsolutevalueofintegers.
*@a- integervalue.
*
*Return: absolutevalueofab.
*/
int _abs(int a)
{
	if (a < 0)
		return (-1 * a);
	else
		return (a);
}
