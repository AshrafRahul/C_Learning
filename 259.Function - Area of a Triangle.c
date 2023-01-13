#include<stdio.h>

float area(float b, float h){
    return 0.5*b*h;
}

int main(){
    float base, height;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);

    float result = area(base,height);
    printf("Area of the triangle is: %.2f\n", result);
}
