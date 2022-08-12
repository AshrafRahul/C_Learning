//1+2+3+4+.....+n
#include<stdio.h>
int main(){

    int n,i, sum=0;
    printf("Enter the last number of the series: ");
    scanf("%d", &n);
    printf("1+2+3+4+...+%d", n);

    for(i=1; i<=n; i=i+1){
        sum = sum + i;
    }
    printf(" = %d\n", sum);

    return 0;
}
