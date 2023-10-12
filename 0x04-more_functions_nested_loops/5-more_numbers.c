#include "main.h"
/**
* more_numbers-check code
*
*/

void more_numbers(void)
{
    int a;
    int count;

    for(count= 0; count<15; count++)
    {
        for(a = 0; a <= 14; a++)
        {
            _putchar(a + '0');
        }
        _putchar('\n');
    }
    _putchar('\n');
}

