//   WAP that illustrates the fact that "An array name is pointer to base address."

#include <stdio.h>
int main()
{	int arr[]={100,200,900},i;
	for (i=0;i<3;++i)
	{
		printf("%p= %d\n",(arr+i),*(arr+i));
	 }
	 }
