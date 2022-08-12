#include<stdio.h>

struct person{
    int age;
    float salary;
};

int main(){
    struct person person[4];
    int i;

    for(i=0; i<4; i++){
        printf("Enter information for Person%d: \n", i+1);
        printf("Enter Age: ");
        scanf("%d", &person[i].age);
        printf("Enter salary: ");
        scanf("%f", &person[i].salary);
        printf("\n");
    }

    printf("\n");
    for(i=0; i<4; i++){
        printf("Information for Person%d: \n", i+1);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %.2f\n", person[i].salary);
        printf("\n");
    }

    getch();
}


