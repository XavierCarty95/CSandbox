
#include <stdio.h>
#include <stdlib.h>

int main(){

 int meng,nmaths,mcomp;
 float p;
 printf("Enter the marks in 3 subjects");
 scanf("%d%d%d", &meng, &nmaths, &mcomp);
 p=(meng+nmaths+(float)mcomp)/300 * 100;
 printf("Percentage of marks = %.2f",p);
}
