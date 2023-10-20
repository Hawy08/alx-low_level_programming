#include "main.h"
/**
* *string_toupper-lower to upper
* @*s-the string
* 
*/


char *string_toupper(char *s)
{
	char *p = s;
	
	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p = *p - 32;
		}
		p++;
	}
	return s;
}
