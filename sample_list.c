#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

struct Node{
	int data;
	struct Node* next;
};


void printlist(struct Node* head)
{
	while(head!=NULL)
	{
		printf("%d\n",head->data);			
		head=head->next;
		
	}
}


int main()
{
	int i,no,data;
	struct Node* head=NULL;
	printf("enter no of node\n");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
		scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
	}	
	printlist(head);


}
