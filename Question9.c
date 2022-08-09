// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
            printf("Greatest = %d",a);
        else
            printf("Greatest = %d",c);
    }
    else if (b>c)
        printf("Greatest = %d",b);
    else
        printf("Greatest = %d",c);
    
    return 0;
}