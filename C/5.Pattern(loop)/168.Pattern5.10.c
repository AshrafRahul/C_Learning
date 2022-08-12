#include<stdio.h>
int main(){

    int n, row, col;
    printf("Enter n: ");
    scanf("%d", &n);

    for(row=n; row>=1; row--){
        //printing number
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(col=1; col<=row; col++){
            //printing space
            printf("#");
        }
        printf("\n");
    }


    return 0;
}






