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
        for(col=1; col<=row; col++){
            printf("%d ", col%2);
        }
        printf("\n");
    }

    //another pattern
    printf("\n\n");

    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%d ", row%2);
        }
        printf("\n");
    }

    return 0;
}



