#include<stdio.h>
#include<math.h>
int main()
{
    double radius, area;

    printf("Enter radius :");
    scanf("%lf", &radius);

    area = M_PI*radius*radius; /*We use here M_PI variable
    that's why we use #include<math.h> hadder file after main hadder file*/

    printf("Area of circle : %.3lf\n", area);


    return 0;
}
