#include<stdio.h>
int main(){

    int x=5;

    int *p;
    p = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %d\n", &x);
    printf("Pointer of x: %d\n", p);
    printf("Value of x: %d\n", *p);
    printf("Pointer variable address: %d\n", &p);

    getch();
}

