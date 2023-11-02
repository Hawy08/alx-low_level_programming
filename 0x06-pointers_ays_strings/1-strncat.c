#include "main.h"
/**
* *_strcat-concatinate strings
* @*dest-first string
* @*src-second string
*/
 
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	char *q = src;
	int i = 0;
	
	while (*p != '\0')
		p++;
	while (i < n && *q != '\0')
	{
		*p = *q;
		p++;
		q++;
		i++;
	}
	*p = '\0';
	return dest;
}
