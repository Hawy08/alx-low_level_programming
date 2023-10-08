#include <stdio.h>

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	putchar('\n');
	return (0);
}
