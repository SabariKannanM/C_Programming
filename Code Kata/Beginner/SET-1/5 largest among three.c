/*
5 - Find the largest number among three numbers entered by user.
*/

#include<stdio.h>
int main(void)
{
	int n1, n2, n3;
	printf("enter three numbers");
	scanf("%d %d %d", &n1,&n2,&n3);
	printf("\n%d is the largest number", (n1>n2) ? (n1>n3) ? n1 : n3 : (n2>n3) ? n2 : n3);
}
