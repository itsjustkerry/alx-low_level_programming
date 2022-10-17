#include <stdio.h>

/**
*main -Cprogramthatprintsthesizeofvarioustypesonthecomputer.
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
	printf("Size of char: %zu bytes\n", sizeof(unsignedcharType));
	printf("Size of int: %zu bytes\n", sizeof(unsignedintType));
	printf("Size of long int: %zu bytes\n", sizeof(unsignedlongintType));
	printf("Size of long long int: %zu byte\n", sizeof(unsignedlonglongintType));
	printf("Size of float: %zu bytes\n", sizeof(unsignedfloatType));

	return (0);
}
