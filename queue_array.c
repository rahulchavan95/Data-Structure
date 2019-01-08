#include<stdio.h>
#include<stdlib.h>


struct queue{
	unsigned capacity;
	int front;
    int rear;
	int* array;
};


struct queue* createstack(unsigned capacity)
{
	struct queue* queue=(struct queue*)malloc(capacity*sizeof(struct queue));
	queue->capacity=capacity;
	queue->front=0;
    queue->rear=0;
	queue->array=(int *)malloc(queue->capacity*sizeof(int));
	return queue;
}


void enqueue(struct queue* q,int key)
{
	if(q->rear==q->capacity-1)
	{
		printf("\nqueue is full\n");
		return;
	}
	q->array[q->rear]=key;
    q->rear++;
	printf("%d  ",key);
	//printf("\n");
}


int dequeue(struct queue* q)
{	    int temp=q->front;
		printf("\n%d  ", q->array[temp]);
        q->front++;
}
	



int main()
{
	struct queue* q=createstack(5);
	enqueue(q,10);
	enqueue(q,5);
	enqueue(q,20);
	enqueue(q,3);
    
    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    printf("\n");
}