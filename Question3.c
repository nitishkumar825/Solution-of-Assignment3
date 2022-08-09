// Write a program to check whether a given number is an even number or an odd number.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num%2==0)
        printf("Even number.");
    else
        printf("Odd number.");
    return 0;
}