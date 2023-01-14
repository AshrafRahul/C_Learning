//1^2 * 2^2 * 3^2 * ... * n^2
#include<stdio.h>
int main(){

    int i,n,mul=1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        mul = mul*i*i;

        if(i==1){
            printf("\n1 * ");
        }
        else if(i==n){
            printf("%d^2", i);
        }
        else{
            printf("%d^2 * ", i);
        }
    }

    printf(" = %d\n", mul);

    return 0;
}


