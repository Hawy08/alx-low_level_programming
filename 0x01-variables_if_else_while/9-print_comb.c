#include <stdio.h>

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		if (n == 9)
			break;
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return(0);
}
