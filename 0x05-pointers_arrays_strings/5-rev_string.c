#include "main.h"
/**
* rev_string-print the sentence
* @s:pointer value
* 
*/
void rev_string(char *s)
{
	int index = 0;
	int len = 0;
	char tmp;
	
	while(s[index++])
	{
		len++;
	}
	for(index = len - 1; index >= len/2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index -1] = tmp;
	}
}
