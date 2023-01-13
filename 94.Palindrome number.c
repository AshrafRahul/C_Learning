#include<stdio.h>
int main(){
    int num, temp, r, sum=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    temp = num;

    while(temp!=0){
        r = temp%10;
        sum = sum*10+r;
        temp = temp/10;
    }
    if(sum==num){
        printf("Palindrome number\n");
    }
    else{
        printf("Not Palindrome number\n");
    }


    return 0;
}
