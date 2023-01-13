#include<stdio.h>

union test{
    int x,y;
};

int main(){
    union test t1;

    t1.x=10;
    printf("t1.x: %d\n", t1.x);
    printf("t1.y: %d\n", t1.y);

    printf("\n");
    t1.y=20;
    printf("t1.x: %d\n", t1.x);
    printf("t1.y: %d\n", t1.y);

    getch();
}
