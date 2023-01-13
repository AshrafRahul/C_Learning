#include<stdio.h>
int main(){

    int n, row, col;
    printf("Enter n: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++){
        //printing space
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            printf("%c", row+96);
        }
        printf("\n");
    }


    return 0;
}



