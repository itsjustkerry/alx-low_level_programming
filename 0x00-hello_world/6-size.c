#include <stdio.h>

/**
*main-Cprogramthatprintsthesizeofvarioustypesonthecomputer.
*
*Return: Always 0.
*/
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	/** sizeof evaluates the size of a variable*/
	printf("Size of char: %lubyte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of int: %lubyte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of long int: %lubyte(s)\n", (unsigned long)sizeof(longintType));
	printf("Size of long long int: %lubyte\n", (unsigned long)sizeof(longlongintType));
	printf("Size of float: %lubyte(s)\n", (unsigned long)sizeof(floatType));

	return (0);
}
