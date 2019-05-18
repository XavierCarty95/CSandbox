#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double pgpa = &gpa;
    char *grade = 'A';
    char *aGrade = &grade
    printf("pointer is at '%p'", &age);
}