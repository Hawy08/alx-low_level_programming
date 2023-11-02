#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: String to be scanned
 * @accept: String containing characters to match
 * Return: Character
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (NULL);
}
