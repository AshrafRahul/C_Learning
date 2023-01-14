#include<stdio.h>
int main()
{
    int num,i=2, count=0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for(i; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }

    return 0;
}
