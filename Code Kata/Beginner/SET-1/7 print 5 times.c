/*
7 - Write a program to print 'Hello' word 5 times.
*/

#include<stdio.h>
int main(void)
{
	char c[50];
	printf("enter a word");
	scanf("%s", &c);
	for(int i=0; i<5; i++)
	printf("\n%s", c);
}
