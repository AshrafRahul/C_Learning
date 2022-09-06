#include<stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int result = fact(5);
    printf("\nFactorial value of %d is: %d\n", n, result);
}
