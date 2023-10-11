#include "main.h"

/**
 * main-prints alphabet
 *
 * Return:always 0
 *
 */
void print_alphabet(void)
{
	char alph1 = 'a';

	while (alph1 <= 'z')
	{
		_putchar(alph1);
		alph1++;
	}
	_putchar('\n');
}
