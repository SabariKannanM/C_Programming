/*
8 - Calculate sum of natural numbers.
*/

#include<stdio.h>
int main(void)
{
	int n;
	printf("enter a natural number: ");
	scanf("%d", &n);
	printf("\nsum of natural numbers: %d", n*(n+1)/2);
}
