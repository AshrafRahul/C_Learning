#include<stdio.h>
int main(){
    char s1[30]="Md. Ashraful Islam";
    char s2[30];

    int i=0, len=0, j;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++){
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("S1: %s\n", s1);
    printf("S2: %s\n", s2);

    int d=strcmp(s1,s2);
    if(d==0){
        printf("\nPalindrome string\n");
    }
    else{
        printf("\nNot a palindrome number\n");
    }

    getch();
}

