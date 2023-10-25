#include "main.h"
/**
* checker- Checks the divider
* @n:number
* @num:base val
* Return:checks
*/
int checker(int num, int n)
{
	if (num < 1)
	{
		return (0);
	}
	if (n * n > num)
	{
		return (1);
	}
	if (num % n == 0 || num % (n + 2) == 0)
	{
		return (0);
	}
	return (checker(num, n + 6));
}
/**
* is_prime_number -  a function for prime 
* Return:1 if the input integer is a prime number, otherwise return 0.
* @n: the value
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	return (checker(n, 6));
}
