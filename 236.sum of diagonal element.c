#include<stdio.h>
int main(){

    int a[10][10], sum=0, i,j;

    //getting the elements for the matrix
    printf("\nEnter number of elemnets: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("a[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    //printing the matrix
    printf("\nThe matrix a: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    //sum of diagonal element
    printf("\nDiagonal elements are: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i==j){
                printf("%d ", a[i][j]);
                sum = sum+a[i][j];
            }
        }
    }
    printf("\nSum of diagonal elements of the matrix: %d\n", sum);

    return 0;
}
