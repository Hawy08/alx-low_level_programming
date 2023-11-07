#include <stdio.h>
/**
* printFileName-Prints the name of the file it was compiled from.
* Return: 0
*/
int printFileName(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

