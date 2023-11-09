#include "variadic_functions.h"
/**
* print_numbers - prints numbers with separators
* @separator: the separator
* @n:the number
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
	printf("%d", va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
