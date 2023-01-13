#include<stdio.h>
int main()
{
    char upper,lower;

    printf("Enter any uppercase letter :");
    scanf("%c", &upper);

    lower = tolower(upper); //tolower is a library function
    printf("Lowercase letter : %c", lower);



}
