#include<stdio.h>
int main(){

    int n, row, col;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n\n");
    //pattern 1
    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%d ", col);
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%d ", col);
        }
        printf("\n");
    }

    printf("\n\n");
    //another pattern
    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%d ", row);
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}





