//1*2+2*4+3*8+...n1*n2
#include<stdio.h>
int main(){
    int n1,n2,sum=0,a=1,b=2;

    printf("Enter n1 and n2: ");
    scanf("%d %d", &n1, &n2);

    printf("\n1*2+2*4+3*8+...%d*%d",n1, n2);

    while(a<=n1 && b<=n2){
        sum = sum + a * b;
        a=a+1;
        b=b*2;
    }
    printf(" = %d\n", sum);

    return 0;
}
