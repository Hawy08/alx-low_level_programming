#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates array of chars, and init it with a spec char.
 * @size: size of array
 * @c: specific char
 * Return: char pointer to malloc created memory address or NULL if error
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(*a));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}