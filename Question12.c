// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an Alphabet : ");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z')
        printf("%c is in Lower case",ch);
    else if (ch>='A'&&ch<="Z")
        printf("%c is in Upper case",ch);
    else
        printf("Input is not an Alphabet");
    
    return 0;
}