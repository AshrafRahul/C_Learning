#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any letter :");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
        printf("The letter is capital letter");
    else if(ch>='a' && ch<='z')
        printf("The letter is small letter");
    else
        printf("That's not a letter");



    return 0;
}

