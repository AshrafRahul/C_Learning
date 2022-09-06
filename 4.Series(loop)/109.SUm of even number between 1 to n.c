//2+4+6+8+...+n
#include<stdio.h>
int main(){

    int i, sum=0, n;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=2; i<=n; i=i+2){
        printf("%d\t", i);
        sum = sum+i;
    }
    printf("\n\n2+4+6+8+...+%d", n);
    printf(" = %d\n", sum);

    return 0;
}

