#include<stdio.h>
#include<stdlib.h>


struct stack{
	unsigned capacity;
	int top;
	int* array;
};


struct stack* createstack(unsigned capacity)
{
	struct stack* stack=(struct stack*)malloc(capacity*sizeof(struct stack));
	stack->capacity=capacity;
	stack->top=-1;
	stack->array=(int *)malloc(stack->capacity*sizeof(int));
	return stack;
}


void push(struct stack* stack,int data)
{
	if(stack->top==stack->capacity-1)
	{
		printf("\nstack is full\n");
		return;
	}
	stack->top++;
	stack->array[stack->top]=data;
	printf("%d  ",data);
	//printf("\n");
}


int pop(struct stack* stack)
{	
	while(stack->top!=-1)
		printf("%d  ", stack->array[stack->top--]);

}
	



int main()
{
	struct stack* stack=createstack(5);
	push(stack,10);
	push(stack,5);
	push(stack,20);
	push(stack,35);
	push(stack,11);
	push(stack,50);
	printf("\n");
	pop(stack);
	printf("\n"); 	
	
}
	