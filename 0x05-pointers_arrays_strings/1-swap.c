#include "main.h"
/**
* swap_int-reset value to 98
* @a:pointer value
* @b:pointer value
*/
void swap_int(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
