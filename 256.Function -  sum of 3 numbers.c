#include<stdio.h>

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    int result = sum(5, 5, 10);
    printf("sum: %d\n", result);

    printf("sum: %d\n", sum(40, 50,80));

}

