#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char line[255];
    FILE *fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);
}