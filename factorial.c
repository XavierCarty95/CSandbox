#include <stdio.h>

int main()
{
   int n; 
   long int fct=1;
   printf("Enter the number");
   scanf("%d", &n);
   while(n>=2)
   {
       fct = fct * n;
       --n;
   }
   printf(" Factorial = %ld", fct);
    
}
