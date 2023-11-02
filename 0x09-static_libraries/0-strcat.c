#include "main.h"
/**
* *_strcat-concatinate strings
* @*dest-first string
* @*src-second string
*/
 
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	char *q = src;
	
	while (*p != '\0')
	p++;
	while (*q != '\0')
{
	*p = *q;
	p++;
	q++;
}
*p = '\0';
return dest;
}
