#include<stdio.h>

int maximum(int x[]){
    int i;
    int maximum = x[0];
    for(i=0; i<5; i++){
        if(maximum<x[i]){
            maximum = x[i];
        }
    }
    return maximum;
}

int main(){
    int num[]={10,20,30,40,50};
    int Maximum_Value = maximum(num);
    printf("Maximum value is: %d\n", Maximum_Value);
}
