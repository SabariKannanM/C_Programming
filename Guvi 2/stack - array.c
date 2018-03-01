#include <stdio.h>

int size=10;
int top = -1;
int stack[10];

void push(){
	for(int i = 0; top != size-1; i++){
	int no;
	scanf("%d", &no);
	top++;
	stack[top]=no;
	}
	 if(top == size-1)
	 printf("overflow \n");
}

void pop(int p){
	for(int i = p; i>0; i--){
	if (top == -1)
	printf("empty stack");
	else{
	printf("The element poped out is %d \n", stack[top]);
	top--;
	}
	}
}

void display(){
	for(int i = top; i>=0; i--)
	printf("%d \t", stack[i]);
	printf("\n");
}

int main(void) {
	// your code goes here
	push();
	display();
	pop(3);
	display();
	return 0;
}
