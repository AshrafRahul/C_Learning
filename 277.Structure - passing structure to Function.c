#include<stdio.h>

struct Person{
    char name[50];
    int age;
    float salary;
};

void display(struct Person p){
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %.2f\n", p.salary);
}

int main(){

    struct Person person1;
    strcpy(person1.name, "Md Ashraful Islam");
    person1.age = 22;
    person1.salary = 6022.50;
    display(person1);

    printf("\n");
    struct Person person2;
    strcpy(person2.name, "Ashraful Islam");
    person2.age = 22;
    person2.salary = 56022.50;
    display(person2);

    printf("\n");
    struct Person person3;
    strcpy(person3.name, "Ashraful");
    person3.age = 22;
    person3.salary = 156022.50;
    display(person3);


    getch();
}
