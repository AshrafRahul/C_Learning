#include<stdio.h>
int main(){

    int row, col, A[3][4]={ {5,6,7,8}, {13,14,15,16}, {9,10,11,12} };

    for(row=0; row<3; row++){
        for(col=0; col<4; col++){
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    return 0;
}
