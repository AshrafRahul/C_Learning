#include<stdio.h>

enum days_of_week{
    sat,sun,mon,tues,wed,thurs,fri
};

int main(){
    enum days_of_week day1,day2,day3;

    day1=mon;
    day2=wed;
    day3=sat;

    printf("Day1: %d\n", day1);
    printf("Day2: %d\n", day2);
    printf("Day3: %d\n", day3);

    int dif = day2-day1;
    printf("\nDay difference: %d\n", dif);


}
