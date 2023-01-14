#include<stdio.h>
int main(){

    int array1[100], n, array2[100], i;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &array1[i]);
    }

    //printing Array1
    printf("Array 1: ");
    for(i=0; i<n; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");

    //copying all the element from array1 to array2
    for(i=0; i<n; i++){
        array2[i]=array1[i];
    }

    //printing Array2
    printf("Array 2: ");
    for(i=0; i<n; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}

