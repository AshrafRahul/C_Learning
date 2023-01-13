#include<stdio.h>
int main(){

    int row, col, n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            printf("%d ", row%2);
        }
        printf("\n");
    }

    return 0;
}


