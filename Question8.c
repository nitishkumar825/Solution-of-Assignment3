// Write a program to check whether a given year is a leap year or not.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter a Year : ");
    scanf("%d",&year);
    if (year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
                printf("Leap Year.");
            else
                printf("Normal year.");
        }
        else
            printf("Leap year.");
    }
    else
        printf("Normal year.");
    
    return 0;
}