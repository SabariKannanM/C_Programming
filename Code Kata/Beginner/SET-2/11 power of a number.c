/*
11 - Calculate the power of a number.
*/

#include<stdio.h>
#include<math.h>
int main(void)
{
	int n, p, r;
	printf("enter a number: ");
	printf("enter the power: ");
	scanf("%d", &n);
	scanf("%d", &p);
	r = pow(n, p);
	printf("\n%d power %d is: %d", n, p, r);
}
