#include "main.h"
/**
* errorcheks - a functionchecks possible errors in the number.
* @n:value
* @base:value
* Return:errors
*/


int errorcheks(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (errorcheks(n + 1, base));
}

/**
* _sqrt_recursion - a function that returns the square root
* @n:value
* Return:sqrt
*/

int _sqrt_recursion(int n)
{
	return (errorcheks(1, n));
}
