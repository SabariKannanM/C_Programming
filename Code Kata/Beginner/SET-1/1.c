#include<stdio.h>
int main(void)
{
	int n;
	printf("enter a number");
	scanf("%d", &n);
	printf("\n%d %s", n, n!=0 ? n>0 ? "is a positive number" : "is a negative number" : "is zero");
}
