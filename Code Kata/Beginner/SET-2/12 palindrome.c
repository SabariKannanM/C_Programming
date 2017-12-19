/*
12 - Check whether a number is palindrome or not.
*/

#include<stdio.h>
int main(void)
{
	int num1, num2, rev=0, rem=0;
	printf("enter a number: ");
	scanf("%d", &num1);
	num2 = num1;
	while (num2 > 0)
	{
		rem = num2 % 10;
		rev = rev * 10 + rem;
		num2 /= 10;
	}
	printf("\n%d %s", num1, rev==num1 ? "is a palindrome" : "is a not palindrome");
}
