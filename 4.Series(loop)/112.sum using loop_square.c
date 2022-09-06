//1^2+2^2+3^2+4^2+...n^2
#include<stdio.h>
int main(){

    int i,n,sum=0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum = sum+i*i;
    }
    printf("\n1^2+2^2+3^2+4^2+...%d^2", n);
    printf(" = %d\n", sum);

    return 0;
}
