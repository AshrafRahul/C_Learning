#include<stdio.h>
int main()
{
    int num1, num2, num3, sum;
    float avg;

    printf("Enter three numbers :");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("The sum is : %d\n", sum);

    avg = (float)sum/3; /*"sum" is a integer number.
    That's why we use (float) to covert sum integer to float data type*/
    printf("Avg is : %.3f\n", avg);

    return 0;



}
