#include<stdio.h>
int main(){
    double base, exp, result=1, i;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exp);

    for(i=1; i<=exp; i++){
        result = result*base;
    }
    printf("The result is: %.2lf\n", result);
}
