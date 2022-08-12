#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two integers :");
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
        printf("The large number is : %d\n", num1);
    else if(num1<num2)
        printf("The large number is : %d\n", num2);
    else
        printf("Numbers are equal");




    return 0;
}


