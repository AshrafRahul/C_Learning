#include<stdio.h>
int main(){
    char s1[]="Md Ashraful Islam";

    strupr(s1);//strupr() for convert Uppercase
    printf("Uppercase: %s\n", s1);

    strlwr(s1);//strlwr() for convert Lowercase
    printf("\nLowercase: %s\n", s1);


    getch();
}
