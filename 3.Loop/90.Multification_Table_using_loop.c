/*
Enter any number :(input)

3*1=3 | num*1 | num*i
3*2=6
.....
.....
3x10 = 30

*/
#include<stdio.h>
int main()
{

    while(1){
    int num, i;
    printf("Enter any number : \n");
    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    }
    return 0;
}
