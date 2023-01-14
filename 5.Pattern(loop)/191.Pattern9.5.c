#include<stdio.h>
int main(){

    int n, row, col;

    printf("Enter n: ");
    scanf("%d", &n);

    //not same number in a row
    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        //printing value
        for(col=1; col<=2*row-1; col++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");

    //same number in a row
    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        //printing value
        for(col=1; col<=2*row-1; col++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}



