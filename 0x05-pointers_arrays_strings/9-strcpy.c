#include "main.h"

/**
 * *_strcpy - prints n elements of an array of integers
 * @a: pointer
 * @n: Integers
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);  
}
