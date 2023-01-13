//1+3+5+.....+n
#include<stdio.h>
int main(){

    int n,i, sum=0;
    printf("Enter the last number of the series: ");
    scanf("%d", &n);
    printf("1 + 3 + 5 + ...+ %d", n); //1+3+5+7+9=25

    for(i=1; i<=n; i=i+2){
        sum = sum + i;
    }
    printf(" = %d\n", sum);

    return 0;
}

