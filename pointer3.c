#include <stdio.h>

int main()
{
    int val = 1000, *pnt, **ppnt;
    pnt = &val;
    ppnt = &pnt;
    printf("Address of val = %p\n",pnt);
    printf("Value of val = %d\n", *pnt);
    printf("Address of val = %p\n", *ppnt);
    printf("Value of val = %d\n", **ppnt);
}
