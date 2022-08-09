// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
        printf("Lower case");
    else if (ch>='A'&&ch<='Z')
        printf("Upper case");
    else if (ch>=48&&ch<=57)
        printf("Given input is a digit");
    else
        printf("Given input is a special character");
        
    return 0;
}