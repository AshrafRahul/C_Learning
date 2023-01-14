//1+2+3+...n
#include<stdio.h>
int main(){

    int i, sum=0, n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d\t", i);
        sum = sum+i;
    }
    printf("\n\n1+2+3+...%d", n);
    printf(" = %d\n", sum);

    return 0;
}
