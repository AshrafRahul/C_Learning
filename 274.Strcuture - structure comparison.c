#include<stdio.h>

struct person{
    int age;
    float salary;
};

int main(){
    struct person person1 = {26,35500.50};
    struct person person2, person3;

    //element wise assignment
    person2.age = 25;
    person2.salary = 30540.25;

    //structure variable assignment
    person3 = person2;

    if(person1.age==person2.age && person1.salary==person2.salary){
        printf("Person1 and Person 2 are equal\n");
    }
    else{
        printf("Person1 and Person2 are not equal\n");
    }

    getch();

}

