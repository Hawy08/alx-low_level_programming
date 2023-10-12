#include "main.h"
/**
* int _isupper-checks for uppercase
* @c: the character to check
* Returns: 1 if c is uppercase and 0 if not
*/

int _isupper(int c)
{
    if(c>='A' && c<='Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
