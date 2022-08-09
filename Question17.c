// Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Enter the sides of the triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    if ((a+b)>c||(b+c)>a||(a+c)>b)
        printf("Triangle is valid");
    else
        printf("Invalid Triangle");
    
    return 0;
}