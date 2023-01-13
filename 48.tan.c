#include<stdio.h>
int main()
{
    double x, result;

    printf("Enter any number :");
    scanf("%lf", &x);

    result = tan(x); /*tan() is a library function*/

    printf("Result = %lf", result);



    return 0;
}


