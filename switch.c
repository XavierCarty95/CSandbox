#include<stdio.h>
#include <math.h>

int main()
{
    char grade = 'B';

    switch(grade){
        case 'A' :
            printf("You did good\n");
            break;
        case 'B' :
            printf("You did well\n");
            break;
        case 'C' :
            printf("You did okay\n");
            break;
        case 'D' :
            printf("You did decent\n");
            break;
        case 'F' :
            printf("You did decent\n");
            break;
        default :
            printf("Invalid grade\n");
    }
}