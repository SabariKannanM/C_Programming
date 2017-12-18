#include<stdio.h>
int main (void)
{
 int num,a,b,c,d;
 printf("Enter a number below 10");
 scanf("%d",&num);
 a = num;
 b = 11*num;
 c = 111*num;
 d = 1111*num;
 printf("\n%d", a+b+c+d) ;
}
