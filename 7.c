/*
Write a program that takes a integer, float and double number
and print the program
*/
#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;

    printf("1.Please enter an Integer number :");
    scanf("%d",&num1);
    printf("You have pressed : %d",num1);

    printf("\n2.Please enter a float number :");
    scanf("%f",&num2);
    printf("You have pressed : %.1f",num2);

    printf("\n3.Please enter a double number : ");
    scanf("%lf",&num3);
    printf("You have pressed : %lf",num3);
}
