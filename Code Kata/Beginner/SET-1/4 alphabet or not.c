/*
4 - Checker whether a character is an alphabet or not.
*/

#include<stdio.h>
int main(void)
{
	char v[9] = {'a','e','i','o','u','A','E','I','O','U'};
	char c;
	printf("enter a character");
	scanf("%c", &c);
	printf("\n%c %s", c, (c>='a' && c<='z' || c>='A' && c<='Z') ? "is an alphabet" : "is not an alphabet");
}
