#include <stdio.h>

/**
*main-printsandthatpieceofartisuseful,followedbynewline.
*
*Return: Always 1.
*/
int main(void)
{
	fwrite(STDOUT_FILENO, "and that piece of art is useful\"-DoraKorpar, 2015-10-19\n", 59);

	return (1);
}
