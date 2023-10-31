#include "main.h"
#include <stdlib.h>

/**
* mystrlen - get lenth of a string
* @s:string
* Return: length
*/
int mystrlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
* str_concat-concatenates two strings.
* @s1: string
* @s2: string
* Return: pointer and NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *p, *q, *rtn;
	int len_a;
	int len_b;

	len_a = mystrlen(s1);
	len_b = mystrlen(s2);
	rtn = malloc(len_a + len_b + 1);
	if (rtn == NULL)
		return (NULL);
	p = s1;
	q = rtn;
	while (*p)
		*q++ = *p++;
	p = s2;
	while (*p)
		*q++ = *p++;
	*q = '\0';
	return (rtn);
}
