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
            printf("%c", col+96);
        }
        printf("\n");
    }

    printf("\n\n");

    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++){
            printf("%c", col+64);
        }
        printf("\n");
    }

    printf("\n\n");

    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++){
            printf("%c", row+96);
        }
        printf("\n");
    }

    printf("\n\n");

    for(row=n; row>=1; row--){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++){
            printf("%c", row+64);
        }
        printf("\n");
    }

    return 0;
}

