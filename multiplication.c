#include <stdio.h>

int main()
{
     int a , c=1;
     printf("Enter the number ");
     scanf("%d", &a);
     while(c<=10)
     {
         printf("%d * %d = %d\n", a,c,a*c);
         ++c;
     }

}
