#include<stdio.h>
int main(){
    int initialNum, finalNum, i, temp, sum=0, r;
    printf("Enter initial number: ");
    scanf("%d", &initialNum);

    printf("Enter Final number: ");
    scanf("%d", &finalNum);

    for(i=initialNum; i<=finalNum; i++){

        temp = i;

        while(temp!=0){
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp/10;
        }

        if(sum==i){
            printf("%d\t", i);
        }

        sum=0;
    }

    return 0;
}
