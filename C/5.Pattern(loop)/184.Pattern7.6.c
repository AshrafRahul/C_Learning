#include<stdio.h>
int main(){

    int row, col, n;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n\n");

    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            printf("%c ", col+64);
        }
        printf("\n");
    }
    printf("\n\n");

    for(row=1; row<=n; row++){
        for(col=1; col<=n; col++){
            printf("%c ", col+96);
        }
        printf("\n");
    }

    return 0;
}


