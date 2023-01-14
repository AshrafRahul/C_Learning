#include<stdio.h>
int main()
{
    float base, height, area;

    printf("Enter Base and Height :");
    scanf("%f %f", &base, &height);

    area = (float)1/2 * base *height; /* here 1/2 is a integer number
    as we have to use float number , we used here (float) */

    printf("The are of the triangle : %.2f", area);


    return 0;



}
