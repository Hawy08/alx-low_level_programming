#include <stdio.h>

/**
 * main-entry point
 * Return:always zero
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	putchar('\n');
	return (0);
}
