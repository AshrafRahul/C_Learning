#include<stdio.h>
int main(){

    int n, row, col, count=0;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\n");
    //pattern 1
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
                printf("%d ", ++count);
            }
        printf("\n");
    }

    return 0;
}


