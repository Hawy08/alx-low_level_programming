#include "main.h"
#include <stdlib.h>

/**
* _strdup -  makes a new str
* @str: string to be dublicated
* Return: a pointer to a new str  str or NULL if error
*/
char *_strdup(char *str)
{
	char *s;
	char *p;
	int length = 0;
	
	if (str == NULL)
		return (NULL);
	while (str[length])
		length++;
	s = malloc(length + 1);
	p = s;
	while (*str)
		*p++ = *str++;
	*p = '\0';
	return (s);
}
