#include <stdio.h>
/**
 * main-print lcase
 * Return: Always a zero
 */
int main(void)
{
	char lcase = 'a';

	while (lcase <= 'z')
	{
		if (lcase != 'q' && lcase != 'e')
		{
			putchar(lcase);
		}
		lcase++;
	}
	putchar('\n');
	return (0);
}
