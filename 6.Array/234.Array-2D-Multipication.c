#include<stdio.h>
int main(){

    int first[10][10], second[10][10], result[10][10], r1,r2,c1,c2, i,j,k, sum=0;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("\n");

    while(c1!=r2){ //condition check
        printf("Error!First matrix's column is not equal to second matrix's row\n");

        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }

    //taking input from first matrix
    printf("Enter element for first matrix: \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("first[%d][%d] = ", i,j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("\n\n");
    //taking input from second matrix
    printf("Enter element for second matrix: \n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("second[%d][%d] = ", i,j);
            scanf("%d", &second[i][j]);
        }
    }

    //multiplying matrix
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            for(k=0; k<c1; k++){
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    printf("\n");
    //printing first matrix
    printf("A matrix: \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //printing second matrix
    printf("B matrix: \n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    //printing result matrix
    printf("Result matrix: \n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
