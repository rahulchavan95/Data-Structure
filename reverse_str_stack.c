#include<stdio.h>
#include<stdlib.h>


struct stack{
	unsigned capacity;
	int top;
	char* array;
};


struct stack* createstack(unsigned capacity)
{
	struct stack* stack=(struct stack*)malloc(capacity*sizeof(struct stack));
	stack->capacity=capacity;
	stack->top=-1;
	stack->array=(char *)malloc(stack->capacity*sizeof(char));
	return stack;
}


void push(struct stack* stack,int data)
{
	stack->top++;
	stack->array[stack->top]=data;
	printf("%c  ",data);
	//printf("\n");
}


char pop(struct stack* stack)
{	
	while(stack->top!=-1)
		printf("%c  ", stack->array[stack->top--]);
}
	



int main()
{
	struct stack* stack=createstack(20);
	push(stack,'e');
	push(stack,'d');
	push(stack,'c');
	push(stack,'b');
	push(stack,'a');
	printf("\n");
	pop(stack); 
	printf("\n");	
	
}
	

