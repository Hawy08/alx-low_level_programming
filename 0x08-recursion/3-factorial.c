#include "main.h"

/**
* factorial - find factorial
* @n - number
* Return: -1 for error
*/

int factorial(int n)
{
    if(n < 0)
    {
        return(-1);
    }
    else if(n == 0)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
