#include<stdio.h>
#include <math.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

struct Book{
    char name[50];
    char title[50];
    int pages;
    char rating[50];
};
int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    printf("%.1f\n", student1.gpa);
    printf("%s\n", student1.name);

    struct Book book1;
    book1.pages = 22;
    strcpy(book1.name, "Xavier");
    strcpy(book1.rating, "five");
    printf("%s", book1.name);

    return 0;
}