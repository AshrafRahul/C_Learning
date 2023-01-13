#include<stdio.h>
int main(){

    int num, i;

    printf("Enter num : ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        printf("%d\t", i);
    }

    return 0;
}
