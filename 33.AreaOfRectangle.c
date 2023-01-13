#include<stdio.h>
int main()
{
    double length, wide, area;

    printf("Enter length and wide :");
    scanf("%lf %lf", &length, &wide);

    area = length * wide;

    printf("Area : %.2lf\n", area);


    return 0;
}
