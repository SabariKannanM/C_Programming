/*
odd or even number
*/

#include<stdio.h>
int main(void)
{
	int n,rem;
	printf("enter a number");
	scanf("%d", &n);
	rem = n%2;
	printf("\n%d %s", n, rem==0 ? "is an even number" : "is an odd number");
}
