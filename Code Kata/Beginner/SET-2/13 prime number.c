/*
13 - Check whether a number is prime or not.
*/

#include<stdio.h>
int main(void)
{
	int num;
	printf("enter a number: ");
	scanf("%d", &num);
	if(num==2||num==3||num==5||num==7||num==11)
		printf("\n%d is a prime number");
	else
		printf("\n%d %s", num, num%2==0 || num%3==0 || num%5==0 || num%7==0 || num%11==0 ? "is not a prime number" : "is a prime number");

}
