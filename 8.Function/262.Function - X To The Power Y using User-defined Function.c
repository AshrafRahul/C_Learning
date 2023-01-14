#include<stdio.h>

void CalculatePower(double base, double exp){
    double result=1, i;
    for(i=1; i<=exp; i++){
        result = result*base;
    }
    printf("The result is: %.2lf\n", result);
}

int main(){
    double base, exp;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exp);

    CalculatePower(base, exp);

}

