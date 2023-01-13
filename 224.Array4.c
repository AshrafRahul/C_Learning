/*white a program that read numbers and display their sum
using array and loop*/
#include<stdio.h>
int main(){

    int a[10], sum=0, i, n;

    printf("How many numbers: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        sum = sum + a[i];
    }
    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum/5);

    return 0;
}
