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
	printf("Sizeofchar:%lubytes\n", (unsigned long)sizeof(charType));
	printf("Sizeofint:%lubytes\n", (unsigned long)sizeof(intType));
	printf("Sizeoflongint:%lubytes\n", (unsigned long)sizeof(longintType));
	printf("Sizeoflonglongint:%lubyte\n", (unsigned long)sizeof(longlongintType));
	printf("Sizeoffloat:%lubytes\n", (unsigned long)sizeof(floatType));

	return (0);
}
