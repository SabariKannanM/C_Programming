#include <stdio.h>
int main(void)
{
 int num1, num2;
 printf("Enter two numbers");
 scanf("%d%d", &num1,&num2);
 printf("\nsum = %d", num1 + num2);
 printf("\ndifference = %d", num1 - num2);
 printf("\nproduct = %d", num1 * num2);
 printf("\nquotent = %d", num1 / num2);
 printf("\nremainder = %d", num1 % num2);
}
