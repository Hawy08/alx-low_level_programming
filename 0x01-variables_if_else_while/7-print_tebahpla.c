#include <stdio.h>

/**
 * main-entry point
 * Return:always zero
 */
int main(void)
{
	char lcase = 'z';

	while (lcase >= 'a')
	{
		putchar(lcase);
		lcase--;
	}
	putchar('\n');
	return (0);
}
