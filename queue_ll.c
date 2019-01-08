#include<stdio.h>
#include<stdlib.h>


struct Qnode
{
   int data;
   struct Qnode* next; 
};

struct Queue
{
        struct Qnode *front,*rear;
};

struct Qnode* newnode(int value)
{
    struct Qnode *temp=(struct Qnode*)malloc(sizeof(struct Qnode));
    temp->data=value;
    temp->next=NULL;
    return temp;
}

struct Queue* createqueue()
{
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->front=q->rear=NULL;
    return q;
}

void enqueue(struct Queue *q,int k,int c)
{
    struct Qnode* temp=newnode(k);
    
    printf("%d in= %d  ",c,temp->data);
    printf("\n");
    if(q->rear==NULL)
    {
            q->front=q->rear=temp;
            return ;
    }    
    q->rear->next=temp;
    q->rear=temp;
    
    
}

struct Qnode* dequeue(struct Queue *q)
{
    if(q->front==NULL)
    {
        return NULL;
    }
    struct Qnode* temp=q->front;
    q->front=q->front->next;

    if(q->front==NULL)
    {
        q->rear=NULL;
    }   
    return temp;
}

int main()
{
    struct Queue* q=createqueue();
    printf("QUEUE \n");
    enqueue(q,5,1);
    enqueue(q,10,2);
    enqueue(q,7,3);
    struct Qnode* n= dequeue(q);
    if(n!=NULL)
    {
        printf("dequeued item= %d \n",n->data);
    }

}