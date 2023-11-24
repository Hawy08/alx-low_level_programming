#include "main.h"

/**
* flip_bits - get num of bits to flip to get from one numb to another.
* @n: num
* @m: num
* Return: the num of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;

	int count;

	unsigned long int chck;

	unsigned long int s;

	count = 0;
	s = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		chck = s >> i;
		if (chck & 1)
		{
			count++;
		}
	}

	return (count);

}
