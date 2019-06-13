

#include <stdio.h>
#include <stdlib.h>

int main(){

 float pmt,roi,sint;
 int tm;
 printf("Enter the principal amount, time and rate of interest");
 scanf("%f%d%f", &pmt,&tm,&roi);
 sint=(pmt * tm * roi)/100;
 printf("Simple Interest = %.2f", sint);

}
