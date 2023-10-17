#include "main.h"
/**
* _puts-print the sentence
* @str:pointer value
* 
*/
void _puts(char *str)
{
    while(*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
