/*
Author: Sabari Kannna M
Date: 21/02/2018
Write a program to find whether a number N is Palindrome or not. A number is a palindrome if the reverse of that number is equal to the original number.

Constraints:
N is a positive number less than 1000000.

Input: A number N
Output: YES if it is a Palindrome else NO

Example 1:
Input: 121
Output: YES

Example 2:
Input: 123
Output: NO
*/

#include<stdio.h>
int main (void){
  unsigned int N,Ncopy,Nrev=0;
  int remainder;
  scanf("%u", &N);
  if(N<1000000){
    Ncopy = N;
    while(Ncopy!=0){
      remainder = Ncopy%10;
      Nrev = Nrev*10 + remainder;
      Ncopy /= 10;
    }
    if(N==Nrev)
      printf("YES");
    else
      printf("NO");
  }
  else
    printf("Enter a number between 0 and 1000000");
}
