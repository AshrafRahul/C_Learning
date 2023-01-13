#include<stdio.h>
int main()
{
    float F, C;

    printf("Enter Fahrenheit temperature :");
    scanf("%f", &F);

    C = (F-32)/1.8;

    printf("Centigrade temperature : %.3f\n", C);


    return 0;
}
