//1+3+5+7+9+...n
#include<stdio.h>
int main(){

    int i, sum=0, n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+2){
        printf("%d\t", i);
        sum = sum+i;
    }
    printf("\n\n1+3+5+7+9+...%d", n);
    printf(" = %d\n", sum);

    return 0;
}

