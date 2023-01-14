#include<stdio.h>

void swapping(int *p1, int *p2){
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int x=10, y=20;

    printf(" Before swapping: x=%d, y=%d\n", x,y);

    swapping(&x, &y);

    printf(" After swapping: x=%d, y=%d\n", x,y);

    getch();
}




