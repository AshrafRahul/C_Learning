#include<stdio.h>

struct book{
    char name[20];
    int price;
};

int main(){
    typedef struct book Book;

    Book b = {"Moyurakkhi",250};

    printf("Book name: %s\n", b.name);
    printf("Book price: %d\n", b.price);

    getch();
}

