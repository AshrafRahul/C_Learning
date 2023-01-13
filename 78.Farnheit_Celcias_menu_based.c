#include<stdio.h>
int main()
{
    int choise;
    float temp,ConvertedTemp;

    printf("Temp conversion menu: \n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("\nEnter your choise : ");
    scanf("%d", &choise);

    switch(choise)
    {
    case 1:
    {
        printf("\nEnter Fahrenheit temperature: ");
        scanf("%f", &temp);
        ConvertedTemp = (temp-32)/1.8;
        printf("\nThe temperature is : %.2f\n", ConvertedTemp);
        break;
    }
    case 2:
    {
        printf("\nEnter Celsius temperature: ");
        scanf("%f", &temp);
        ConvertedTemp = (temp*1.8)+32;
        printf("\nThe temperature is : %.2f\n", ConvertedTemp);
        break;
    }
    default:
        printf("Not a correct option");

    }
    return 0;
}
