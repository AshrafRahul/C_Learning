#include<stdio.h>
int main()
{
    double num, result; /*square root return double type value.
    That's why we use here "double" variable*/
    printf("Enter any number :");
    scanf("%lf", &num);

    result = sqrt(num); /*"sqrt" is a library function.
    we use this function to get the square root value*/

    printf("The value is : %lf", result);

    return 0;
}
