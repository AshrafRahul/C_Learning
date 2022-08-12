#include<stdio.h>
int main()
{
    float num1, num2;
    printf("Enter two float numbers :");
    scanf("%f %f", &num1, &num2);

    printf("Numbers are : %.2f %.1f\n", num1, num2);
    return 0;
}
