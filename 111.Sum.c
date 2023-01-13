//1.5+2.5+3.5+4.5+...n
#include<stdio.h>
int main(){

    float n, i, sum=0;

    printf("Enter n: ");
    scanf("%f", &n);

    for(i=1.5; i<=n; i++){
        printf("%.1f\t", i);
        sum = sum+i;
    }
    printf("\n\n1.5+2.5+3.5+4.5+...%.1f", n);
    printf(" = %.1f", sum);

    return 0;
}
