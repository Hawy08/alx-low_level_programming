#include "main.h"

/**
* print_binary - print binary
* @n: the num
*/

void print_binary(unsigned long int n)
{
	int i;

	int count;

	unsigned long int chck;

	count = 0;

	for (i = 63; i >= 0; i--)
	{
		chck = n >> i;

		if (chck & 1)
		{
			_putchar('1');
			count++;
		}

		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}

}
