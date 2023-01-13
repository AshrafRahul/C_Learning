#include<stdio.h>
int main(){

    int num[10];

    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;

    int sum = num[0] + num[1] + num[2] + num[3] + num[4];

    printf("%d\n", sum);

    return 0;
}
