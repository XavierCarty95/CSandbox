#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%d", *&age);

    return 0;
}