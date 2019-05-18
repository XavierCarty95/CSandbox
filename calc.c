#include<stdio.h>
#include <math.h>

int main() {
int num1;
int num2;
char op;

printf("Enter s number : ");
scanf("%d", &num1);
printf("Enter operator : ");
scanf(" %c", &op);
printf("Enter number : ");
scanf("%d", &num2);

if(op == '+')
    {
        printf("%d\n",num1 + num2);

    }
    else if (op == '-')
    {

        printf("%d\n",num1 - num2);
    }
    else if (op == '/')
    {
        printf("%d\n",num1 / num2);
    }
    else if(op == '*')
    {
        printf("%d\n",num1 * num2);
    } else { printf("Invalid operator");
            }
}