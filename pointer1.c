                       /*      A program using pointers    */
#include <stdio.h>
int main()
{
	int *pt ;   // declaration of pointer to int
	int a=100  ;
	float *fp ;  // declaration of pointer to float
	float b=90.99 ;
	char *cp ;   // declaration of pointer to char
	char bool='y' ;
	pt=&a ;
	fp=&b ;
	cp=&bool ;
	printf("\nAddress of a    = %p", pt);
	printf("\nAddress of b    = %p", fp);
	printf("\nAddress of bool = %s", cp);
	}
