#include "main.h"

/**
 * main-prints alphabet
 *
 * Return:always 0
 *
 */

int main(void)

{

	char alph1 = 'a';
	print_alphabet();

	while (alph1 <= 'z')
	{
		_putchar(alph1);
		alph1++;
	}
	_putchar('\n');
	
	return (0);
}
