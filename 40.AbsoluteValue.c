#include<stdio.h>
int main()
{
    int num,result;

    printf("Enter any number :");
    scanf("%d", &num);

    result = abs(num); /*"abs" is a library function.
    we use this library function to get the absolute value*/

    printf("Absolute value is : %d", result);



    return 0;
}
