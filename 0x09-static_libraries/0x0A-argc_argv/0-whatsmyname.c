#include <stdio.h>

/**
* main - main function
* @argc:number of args
* @argv[]:array of argc
* Return: 0 is success
*/

int main(int argc, char* argv[])
{
    int i;

    for (i = 0; i <argc; i++)
        printf("%s\n", argv[i]);
    return (0);
}
