#include<stdio.h>
int main(){
    char s1[20]="Md. Ashraful Islam";
    char s2[20]="Rahul";
    char temp[20];

    printf("Before swapping: \n");
    printf("String1: %s\n", s1);
    printf("String2: %s\n", s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\nAfter swapping: \n");
    printf("String1: %s\n", s1);
    printf("String2: %s\n", s2);


    getch();
}
