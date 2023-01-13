#include<stdio.h>
int main(){

    int n, row, col;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");
    //pattern 1
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            if(row==1||row==n||col==1||col==n||row==col){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n");
    //pattern 2
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            if(row==1||row==n||col==1||col==n||row==col){
                printf("# ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


