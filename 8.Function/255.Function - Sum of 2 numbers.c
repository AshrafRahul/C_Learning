#include<stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int result = sum(5, 6);
    printf("sum: %d\n", result);

    printf("sum: %d\n", sum(54,87));

}
