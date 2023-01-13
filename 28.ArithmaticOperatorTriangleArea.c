//Write a program that calculate the area of triangle.
#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Base :");
    scanf("%f", &base);

    printf("Height :");
    scanf("%f", &height);

    area = (float)1/2 * base * height; /*Because 1/2 is a integer number,
    that's why we have to use (float) to convert 1/2 into float number.
    We can also use 0.5 here instead of (float)1/2*/

    printf("Area = %.2f\n", area);



    return 0;

}


