#include "main.h"

/**
 * print_alphabet-prints alphabet
 *
 * Return:void
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

