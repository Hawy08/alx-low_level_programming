
#include "variadic_functions.h"

/**
* sum_them_all - sum numbers
* @n:number
* Return:sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;

	unsigned int i;

	va_list(args);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;



	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
