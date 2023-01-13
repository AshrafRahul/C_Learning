#include<stdio.h>

    //global structure
    //it used outside of the main function
    struct person{
        int age;
        float salary;
    };

int main(){
    struct person person1, person2;//local variable, it used inside of the main function

    printf("Enter information for person1: \n");
    printf("Enter age: ");
    scanf("%d", &person1.age);
    printf("Enter salary: ");
    scanf("%f", &person1.salary);
    printf("\nPerson1: \n");
    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    printf("\n");

    printf("Enter information for person2: \n");
    printf("Enter age: ");
    scanf("%d", &person2.age);
    printf("Enter salary: ");
    scanf("%f", &person2.salary);
    printf("\nPerson2: \n");
    printf("Age: %d\n", person2.age);
    printf("Salary: %.2f\n", person2.salary);


    getch();
}


