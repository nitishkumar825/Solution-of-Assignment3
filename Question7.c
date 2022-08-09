// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include <stdio.h>

int main()
{
    int a,b,c,D;
    printf("Enter the value for a : ");
    scanf("%d",&a);
    printf("Enter the value for b : ");
    scanf("%d",&b);
    printf("Enter the value for c : ");
    scanf("%d",&c);
    D = (b*b)-4*a*c;
    if (D>0)
        printf("\nRoots of this given quadratic equation are real & distinct.");
    else if (D==0)
        printf("\nRoots of this given quadratic equation are real & equal.");
    else
        printf("\nRoots of this given quadratic equation are imaginary.");
      
    return 0;
}