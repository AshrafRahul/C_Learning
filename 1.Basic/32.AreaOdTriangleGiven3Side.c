#include<stdio.h>
int main()
{
    double a, b, c, s, area;

    printf("Enter value :");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a+b+c)/(double)2;

    area = sqrt (s*(s-a)*(s-b)*(s-c));

    printf("The area of the triangle : %.2lf", area);


    return 0;



}

