// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>

int main()
{
    float a,b,c,d,e;
    printf("Enter all subjects marks : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float percentage = (a+b+c+d+e)/5.0;
    if (a>=33&&b>=33&&c>=33&&d>=33&&e>=33&&percentage>=33)
        printf("Congratulations!! You have Passed");
    else
        printf("You have failed the examination");
    return 0;
}