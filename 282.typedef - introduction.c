#include<stdio.h>
int main(){
    typedef char NAME;

    NAME ch;
    ch='A';
    printf("ch: %c\n", ch);

    NAME ch1;
    ch1='B';
    printf("ch1: %c\n", ch1);

    getch();
}
