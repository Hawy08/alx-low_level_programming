#include "main.h"
/**
* puts_half - reverse a string
* @str: pointer to the string
* 
*/


void puts_half(char *str)
{
	int i,j = 0;
	
	while (str[j] != '\0')
		j++;
	if(j%2 == 1)
	{
		n = (j - 1) / 2;
		n += 1;
		for(i = n; i<=j , i++)
			_putchar(str[i]);
	}
	else
	{
		for(i = (j / 2); i < j; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
