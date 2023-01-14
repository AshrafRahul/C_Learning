#include<stdio.h>
int main(){

    int n, row, col;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");

    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}

