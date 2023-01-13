#include<stdio.h>
int main(){

    int array1[]={1,5,4,7,8}, array2[5], i;

    //printing Array1
    printf("Array 1: ");
    for(i=0; i<5; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");

    //copying all the element from array1 to array2
    for(i=0; i<5; i++){
        array2[i]=array1[i];
    }

    //printing Array2
    printf("Array 2: ");
    for(i=0; i<5; i++){
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
