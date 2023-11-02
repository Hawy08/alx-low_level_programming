#include "main.h"
#include <unistd.h>

/***
 * _putchar-write the char c to the stdout
 * @c: The character to print
 *
 * return: on success 1.
 * 0 error, -1 is returned, and set appropriately,
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
