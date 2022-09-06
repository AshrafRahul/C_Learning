#include<stdio.h>
int main(){

    int row,col,A[10][10],B[10][10],C[10][10],row_num,col_num;

    printf("Enter the number of rows: ");
    scanf("%d", &row_num);
    printf("Enter the number of columns: ");
    scanf("%d", & col_num);

    printf("\n");

    //scanning A matrix
    printf("Enter elements for A matrix: \n");
    for(row=0; row<row_num; row++){
        for(col=0; col<col_num; col++){
            printf("A[%d][%d]= ", row, col);
            scanf("%d", &A[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    //scanning B matrix
    printf("Enter elements for B matrix: \n");
    for(row=0; row<row_num; row++){
        for(col=0; col<col_num; col++){
            printf("B[%d][%d]= ", row, col);
            scanf("%d", &B[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    //printing A matrix
    printf("Matrix A: ");
    printf("\n");
    for(row=0; row<row_num; row++){
        for(col=0; col<col_num; col++){
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }

    printf("\n");

    //printing B matrix
    printf("Matrix B: ");
    printf("\n");
    for(row=0; row<row_num; row++){
        for(col=0; col<col_num; col++){
            printf("%d ", B[row][col]);
        }
        printf("\n");
    }

    //scanning C matrix
    for(row=0; row<row_num; row++){
        for(col=0; col<col_num; col++){
            C[row][col] = A[row][col]+B[row][col];
        }
        printf("\n");
    }
    printf("\n");

    //printing C matrix
    printf("Matrix A + Matrix B = Matrix C: ");
    printf("\n");
    for(row=0; row<row_num; row++){
        for(col=0; col<col_num; col++){
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }


    return 0;
}



