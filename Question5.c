// Write a program to print the first 10 odd natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int i = 20;
    while (i>0)
    {
        printf("%d\n",i-1);
        i-=2;
    }
    
    return 0;
}