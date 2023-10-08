#include <stdio.h>

int main(void)
{
	char lcase = 'z';
	
	while (lcase >= 'a')
	{
		putchar(lcase);
		lcase--;
	}
	putchar('\n');
	return(0);
}
