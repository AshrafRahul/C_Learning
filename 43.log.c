#include<stdio.h>
int main()
{
    double x, result;

    printf("Enter any number :");
    scanf("%lf", &x);

    result = log(x); /*log() is a library function*/

    printf("log(x) = %lf", result);



    return 0;
}
