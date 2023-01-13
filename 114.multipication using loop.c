//1 X 2 X 3 X ... X n
#include<stdio.h>
int main(){

    int i,n,mul=1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        mul = mul*i;

        if(i==1){
            printf("\n1 * ");
        }
        else if(i==n){
            printf("%d", i);
        }
        else{
            printf("%d * ", i);
        }
    }

    printf(" = %d\n", mul);

    return 0;
}

