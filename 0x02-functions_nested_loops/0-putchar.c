
#include <unistd.h>
/**
 * main-entrypoint
 * 
 * Return: onsucess zero
 *
 */

int main(void)
{
	char *msg = "_putchar\n";

	write(1, msg, 8);
	return (0);

}
