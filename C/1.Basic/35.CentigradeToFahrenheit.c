 #include<stdio.h>
 int main()
 {
     float F, C;

     printf("Enter Centigrade temperature :");
     scanf("%f", &C);

     F = (1.8*C)+32;

     printf("Fahrenheit temperature : %f\n", F);


     return 0;
 }
