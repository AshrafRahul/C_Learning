#include<stdio.h>
int main()
{
    char lower,upper;

    printf("Enter any lowercase letter :");
    scanf("%c",&lower);

    upper = toupper(lower); //toupper is a library function
    printf("Uppercase letter = %c", upper);




}
