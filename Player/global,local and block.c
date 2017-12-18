#include<stdio.h>
int count = 1;
int main(void)
{
   int count = 2;
   function1();
   printf("\nLocal count is %d",count);
  function2();
}
void function1()
{
   printf("\nGlobal count is %d",count); 
	
}
   void function2()
   {
   	int count = 3;
   	printf("\nBlock count is %d",count);
   }
