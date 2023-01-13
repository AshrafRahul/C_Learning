#include<stdio.h>
int main(){

    int n, row, col;

    printf("Enter n: ");
    scanf("%d", &n);

    //sequential capital letter
    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        //printing value
        for(col=1; col<=2*row-1; col++){
            printf("%c", col+64);
        }
        printf("\n"); //for new line
    }
    printf("\n\n"); //for extra new line

    //sequential small letter
    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        //printing value
        for(col=1; col<=2*row-1; col++){
            printf("%c", col+96);
        }
        printf("\n");//for new line
    }

    printf("\n\n");//for extra new line

    //same capital letter in a row
    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        //printing value
        for(col=1; col<=2*row-1; col++){
            printf("%c", row+64);
        }
        printf("\n");//for new line
    }
    printf("\n\n");//for extra new line

    //same small letter in a row
    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }

        //printing value
        for(col=1; col<=2*row-1; col++){
            printf("%c", row+96);
        }
        printf("\n");//for new line10
    }

    return 0;
}



