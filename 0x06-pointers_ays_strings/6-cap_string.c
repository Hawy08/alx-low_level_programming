#include "main.h"
/**
* cap_string-cap string
* @*s-the string
* 
*/

char *cap_string(char *s)
{
	char *p = s;
	char prev = ' ';
	
	while (*p != '\0')
	{
		if ((prev == ' ' || prev == '\t' || prev == '\n' || prev == ',' || prev == ';' || prev == '.' || prev == '!' || prev == '?' || prev == '"' || prev == '(' || prev == ')' || prev == '{' || prev == '}') && (*p >= 'a' && *p <= 'z'))
		{
			*p = *p - 32;
		}
		prev = *p;
		p++;
	}
	return s;
}
