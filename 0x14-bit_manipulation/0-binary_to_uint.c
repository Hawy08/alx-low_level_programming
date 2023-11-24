#include "main.h"

int checkBinary(const char *str);

/**
* checkBinary - check if the str is binary
* @str: binary
* Return: 0 or 1
*/


int checkBinary(const char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != '0' && str[i] != '1')
		{
			return (0);
		}
	}
	return (1);

}
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b:pointing to a string of 0 and 1 chars
* Return: the converted number or 0 or NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int number;

	number = 0;

	if (b != NULL && checkBinary(b))
	{
		while (*b != '\0')
		{
			number *= 2;
			number += (*b - '0');

			b++;

		}
		return (number);
	}

	return (0);
}
