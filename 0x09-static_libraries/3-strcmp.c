#include "main.h"

int _strcmp(char *s1, char *s2)
{
	char *p = s1;
	char *q = s2;
	while(*p != '\0' && *q != '\0')
	{
		if (*p != *q)
		{
			return *p - *q;
		}
		p++;
		q++;
	}
	return *p - *q;
}
