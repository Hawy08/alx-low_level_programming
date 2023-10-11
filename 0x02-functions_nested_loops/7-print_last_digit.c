#include "main.h"
/**
* print_last_digit - prints value of the last digit
* @n: Number being checked
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int lst;

	lst = n % 10;
	if (n < 0)
		lst = lst * (-1);
	_putchar(lst + '0');
	return (lst);
}