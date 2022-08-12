#include<stdio.h>
int main(){

    int num, sum=0, a=0;

    printf("Enter the last number: ");
    scanf("%d", &num);

    printf("\n1+2+3+4+...+%d", num);

    while(a<=num){
        sum = sum +a;
        a=a+1;
    }

    printf(" = %d\n", sum);

    return 0;
}
