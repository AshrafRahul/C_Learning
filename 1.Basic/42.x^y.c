#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x :");
    scanf("%d", &x);

    printf("Enter y :");
    scanf("%d", &y);

    double result = pow(x,y); /*"pow" is a library function.
    It's a short form of power. We use this function to calculate x^y type problem.*/

    printf("Result : %lf", result);

    return 0;
}
