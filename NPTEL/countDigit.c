/*
Given a number N and a digit d, find the total number of occurrence of digit d in number N

INPUT: Two numbers N and d separated by whitespace.
OUTPUT: Total number of occurrence of digit d in N

CONSTRAINTS: 
0<N<=10000000
0<=d<=9
*/
#include<stdio.h>
int main (void){
  unsigned int N, Nrem;
  int d,count=0;
  scanf("%u", &N);
  scanf("%d", &d);
  if(N>0 && N<=10000000 && d>=0 && d<=9){
  	while(N >0){
  		Nrem = N%10;
  		
  		if(Nrem == d)
  		count += 1;
  		
  		N /= 10;
  	}
  	printf("%d", count);
}
}
