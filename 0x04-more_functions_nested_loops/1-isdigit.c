#include "main.h"
/**
* int _isdigit-checks for digit
* @c: the character to check
* Returns: 1 if c is dgt and 0 if not
*/

int _isdigit(int c)
{
    if(c >= 48 && c <= 57)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
