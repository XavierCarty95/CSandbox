#include <stdio.h>

int main()
{
    int n,count;
    float biggest;
    printf(" Enter the size of the array ");
    scanf("%d", &n);
    float values[n];

    for (count = 0; count  < n; ++count)
    {
       scanf("%f", &values[count]);
    }
    biggest = values[0];
    for(count = 1; count < n; ++count)
    {
        if(values[count]>biggest)
        {
            biggest = values[count];
        }
    }
    printf("Biggest value = %.2f", biggest );
}
