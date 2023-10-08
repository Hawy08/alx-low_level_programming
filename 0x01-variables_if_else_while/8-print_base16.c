#include <stdio.h>
/**
 * main-entry point
 * Return:Always zero
 * */

int main(void)
{
	int n = 0;
	char x = 'a';

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
