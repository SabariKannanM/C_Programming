/*
9 - Calculate sum of N using for Loop.
*/

#include<stdio.h>
int main(void)
{
	int n1,n2=0;
	printf("enter a natural number: ");
	scanf("%d", &n1);
	for(int i=1; i<=n1; i++)
	{
		n2+=i;
	}
		printf("\nsum of natural numbers: %d", n2);
}
