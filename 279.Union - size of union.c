#include<stdio.h>

union test1{
    int x,y;
};

union test2{
    char ch;
    int x;
};

union test3{
    char name[20];
    double d;
};

int main(){
    union test1 t1;
    union test2 t2;
    union test3 t3;

    printf("sizeof(t1): %d\n", sizeof(t1));
    printf("sizeof(t2): %d\n", sizeof(t2));
    printf("sizeof(t3): %d\n", sizeof(t3));

    getch();
}

