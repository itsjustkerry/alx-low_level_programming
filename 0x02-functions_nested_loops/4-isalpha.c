#include "main.h"

/**
*_isalpha-functionchecksforalphabeticcharacters.
*@c: charactertobechecked.
*
*Return: 1ifcisaletter,whetheruppercaseorlowercase,otherwisereturn0.
*/
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
