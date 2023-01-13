//Go to statement
#include<stdio.h>
int main()
{
    int i=1;

rahul:
    printf("%d\t",i);
    i++;

    if(i<6)
        goto rahul; //label calling here

    return 0;
}
