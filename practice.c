#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <math.h>


int main()
{

  double num1;
  double num2;

  printf("What is your number: ");
  scanf("%lf", &num1);
  printf("What is your second number: ");
  scanf("%lf", &num2);

  printf("Answer: %f ", num1 + num2);



}