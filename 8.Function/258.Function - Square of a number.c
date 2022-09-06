#include<stdio.h>

int square(int a){
    return a*a;
}

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);

    int result = square(num);
    printf("Square value is: %d\n", result);

}
