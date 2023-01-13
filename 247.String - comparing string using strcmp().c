#include<stdio.h>
int main(){
    char s1[]="Md. Ashraful Islam";
    char s2[]="Md. Ashraful Islam";

    int d = strcmp(s1,s2);

    if(d==0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }

}
