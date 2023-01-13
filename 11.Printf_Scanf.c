#include<stdio.h>
int main()
{
    int num1, num2;
    float num3, num4;
    double num5;
    printf("Enter two integer number, two float numbers, a double number :");
    scanf("%d %d %f %f %lf", &num1, &num2, &num3, &num4, &num5);

    printf("Integer numbers are : %d %d\n", num1, num2);
    printf("Float numbers are : %.2f %.1f\n",num3, num4);
    printf("Double number is : %lf\n",num5);
    return 0;
}

