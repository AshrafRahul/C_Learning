#include<stdio.h>
int main(){

    char s1[100];
    int i, capital, small, digit;
    i=capital=small=digit=0;

    printf("Enter a string: ");
    gets(s1);

    while(s1[i]!='\0'){
        if(s1[i]>=65 && s1[i]<=90){
            capital++;
        }
        else if(s1[i]>=97 && s1[i]<=122){
            small++;
        }
        else if(s1[i]>=48 && s1[i]<=57){
            digit++;
        }

        i++;
    }

    printf("\nNumber of capital letter: %d\n", capital);
    printf("Number of small letter: %d\n", small);
    printf("Number of digit: %d\n", digit);


    getch();
}
