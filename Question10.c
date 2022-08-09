// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include <stdio.h>

int main()
{
    float cp,sp;
    printf("Enter cost price : ");
    scanf("%d",&cp);
    printf("Enter selling price : ");
    scanf("%d",&sp);
    if (sp>cp)
        printf("Profit % = %.2f %",((sp-cp)/cp)*100);
    else
        printf("Loss % = %.2f %",((cp-sp)/cp)*100);
    return 0;
}