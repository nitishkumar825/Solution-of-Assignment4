// Write a program to print a table of 5.

#include <stdio.h>

int main()
{
    int i = 1;
    printf("Multiplication Table of 5\n\n");
    while (i<=10)
    {
        printf("5 * %d = %d\n",i,5*i);
        i++;
    }
    
    return 0;
}