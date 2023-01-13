#include<stdio.h>
int main(){

    int a[10][10], transpose[10][10],i,j,row,col;
    printf("Enter number of rows for the matrix: ");
    scanf("%d", &row);
    printf("Enter number of columns for the matrix: ");
    scanf("%d", &col);

    //getting the elements for the matrix
    printf("\nEnter number of elemnets: \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    //printing the matrix
    printf("\nThe matrix a: \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //making transpose matrix
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            transpose[j][i] = a[i][j];
        }
    }

    //printing transpose matrix
    printf("\nTranspose matrix is: \n");
    for(i=0; i<col; i++){
        for(j=0; j<row; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
