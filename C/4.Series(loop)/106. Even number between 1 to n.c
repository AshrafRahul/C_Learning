#include<stdio.h>
int main(){

    int num, i;

    printf("Enter num : ");
    scanf("%d", &num);

    for(i=2; i<=num; i=i+2){
        printf("%d\t", i);
    }

    return 0;
}

