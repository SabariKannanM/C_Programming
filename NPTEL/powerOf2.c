/*
Write a C program to check whether a number N is power of 2 or not

Explanation:
Take number 12.
NO : as 12 is not a power of two

Constraint:
1<=N<=10000000

Input: A single number
Output:  YES if it is power of 2 else NO

Example 1:
Input: 123
Output: NO

Example 2:
Input: 128
Output: YES
*/

#include<stdio.h>
int main (void){
  unsigned int N, Nrem;
  int i;
  scanf("%d", &N);
  if(N>0 && N<=10000000 && N%2==0){
  	for(i=0; N>1; i++){
  	Nrem = N%2;
  	N = N/2;
  	if(Nrem != 0){
  		printf("NO");
  		break;
  	}
  }
  	if(N==1 && Nrem==0)
  	printf("YES");
  }
  else
  printf("NO");
}
