#include<stdio.h>

struct test1{
    int x;
    int y;
    double z;
    char name[20];
};

int main(){
    struct test1 t1;

    printf("sizeof(t1): %d\n", sizeof(t1));

    getch();
}
