#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


struct Node{
	int data;
	struct Node* next;
};


struct Node* push(struct Node* head,int data)                 //insert a new node
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
	return head;
}




struct Node* insertfirst(struct Node* head,int data)	      //insert newnode at the start
{	
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
	return head;
}




struct Node* insertAfter(struct Node* prev_node,int data)     //insert node at the middle
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=prev_node->next;
	prev_node->next=newnode;	
	
}




struct Node* insertLast(struct Node* head,int data)          //insert node at last
{
	struct Node* last=head;
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=NULL;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=newnode;	
}




struct Node* deleteFirst(struct Node* head)                  //delete first element
{ 
	struct Node* temp=head;
	head=temp->next;
	free(temp);
	return head;
}
	



struct Node* deleteLast(struct Node* head)                   //delete last element
{
	struct Node *p,*q;
	p=head;
	q=head->next;
	while(q->next!=NULL)
	{
		p=p->next;
		q=q->next;
	}
	if(q->next==NULL)
	{
		p->next=NULL;
		free(q);
	}
	return head;		

}




struct Node* deleteMiddle(struct Node* head,int key)         //delete middle element
{
	struct Node *p,*q;
	p=head;
	q=head->next;
	while(q->data!=key)
	{
		p=p->next;
		q=q->next;
	}
	if(q->data==key)
	{
		p->next=q->next;
		free(q);
	}
	return head;
}





bool search(struct Node* head,int key)                      //search for given node
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		
		if(temp->data==key)
			printf("%d node found\n",key);
		temp=temp->next;
	}
	
}




int Nth_node(struct Node* head,int index)                   //get Nth_node of list
{
	struct Node* temp=head;
	int cnt=0;
	while(temp!=NULL)
	{
		if(cnt==index)
			printf("Nth Node- %d\n",temp->data);
		temp=temp->next;
		cnt++;
	}
}
	




int occurence_of_node(struct Node* head,int key)             //count occurence of node
{
	struct Node* temp=head;
	int cnt=0;
	while(temp!=NULL)
	{
		if(temp->data==key)
		 cnt++;
		temp=temp->next;
		
	}
	printf("Total Occurences=%d\n",cnt);
}	




int sumofNodes(struct Node* head)                           //sum of all nodes
{
	struct Node* temp=head;
	int sum=0;
	while(temp!=NULL)
	{
		sum=sum+temp->data;
		temp=temp->next;
	}
	return sum;
}




struct Node* reverse(struct Node* head)                     //reverse a linked list
{
	struct Node* current=head;
	struct Node* prev=NULL,*next=NULL;
	
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		
		prev=current;
		current=next;
	}
	return prev;
}




struct Node* remove_duplicates(struct Node* head)              //remove duplicates from list
{
	struct Node* ptr1,*ptr2,*dup;
	ptr1=head;
	
	while(ptr1!=NULL && ptr1->next!=NULL)
	{
		ptr2=ptr1;
		
		while(ptr2->next!=NULL)
		{
			if(ptr1->data==ptr2->next->data)
			{
				dup=ptr2->next;
				ptr2->next=ptr2->next->next;
				free(dup);
			}
			else
				ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	}
}





int find_length(struct Node* head)                               //find length of linked list
{
	struct Node* temp=head;
	int cnt=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		cnt++;
	}
	return cnt;
}




struct Node* swap_groups(struct Node* head,int key)
{
	struct Node *p,*q,*temp,*new_start;
	int cnt=1;
	p=head;
	while(cnt!=key)
	{
		if(p->next==NULL)
		{
			return head;
		}
		p=p->next;
		cnt++;
	}
	
	new_start=p;
	q=new_start;
	
	while(1)
	{
		p=head;
		temp=q->next;
		if(temp==NULL)
		{
			reverse(p);
			return new_start;
		}
		q->next=NULL;
		q=temp;
		head=temp;
		cnt=1;
		while(cnt!=key)
		{
			if(temp->next==NULL)
			{
				reverse(p);
				p->next=q;
				return new_start;
			}
			temp=temp->next;
			cnt++;
		}
		reverse(p);
		p->next=temp;
		q=temp;
	}
	return new_start;
}
	



struct Node* find_intersection(struct Node* head,struct Node* head2)      //find intersection point of two lists
{
	struct Node* p=head;
	struct Node* q=head2;
	struct Node* smaller,*larger;
	int length1,length2,cnt=0;

	length1=find_length(head);        //find length of both LLs
	length2=find_length(head2);
	
	int d=length1-length2;            //get the difference d
	if(d<0)
	{
		d=d*-1;
	}
	
	if(length1>length2)              //check lengths and assign larger element
	{
		larger=p;
		smaller=q;
	}
	else
	{
		larger=q;
		smaller=p;
	}
	
	while(cnt<d)                    //move d nodes in larger LL
	{
		larger=larger->next;
		cnt++;
	}

	while(larger!=smaller)          //loop till larger eqaul to smaller
	{
		larger=larger->next;
		smaller=smaller->next;
	}
	printf("%c\n",larger->data);
}	




struct Node* remove_loop(struct Node* slow_ptr,struct Node* head)       //remove node which is creates loop
{
	struct Node* q=head;
	while(slow_ptr!=q)
	{
		slow_ptr=slow_ptr->next;
		q=q->next;
	}
	slow_ptr->next=NULL;
}		




struct Node* detect_loop(struct Node* head)                    //find a loop in linked list
{
	struct Node* fast_ptr=head;
	struct Node* slow_ptr=head;
	
	while(slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr=slow_ptr->next;
		fast_ptr=fast_ptr->next->next;
		
		if(slow_ptr==fast_ptr)
		{
			printf("\nLoop found \n");
			return slow_ptr;
		}
	}
		
	printf("\nno loop\n");
}
	




struct Node* check_palindrome(struct Node* head)             //check linked is palindrome or not
{
	struct Node*p,*q,*first_start,*second_start;
	p=head;
	q=head;
	if(p->next==NULL)
	  printf("linked list is palindrome");
	
	while(1)
	{
		p=p->next->next;
		if(p->next==NULL)
		{
			second_start=q->next->next;
			break;
		}
		if(p==NULL)
		{
			second_start=q->next;
			break;
		}
		q=q->next;
	}		
	q->next=NULL;
	
	second_start=reverse(second_start);
	
	first_start=head;
	
	while(first_start!=NULL && second_start!=NULL)
	{
		if(first_start->data==second_start->data)
 		{
			first_start=first_start->next;
			second_start=second_start->next;
		}
		else
		{
			printf("\nnot a palindrome\n");
			return 0;
		}
		
	}
	printf("\nlist is palindrome\n");
}



/*
void swap(int *p,int* q)                                      //swap elements
{
	int temp=*p;
	*p=*q;
	*q=temp;
}


 
struct Node* pairwise_swap(struct Node* head)                //pairwise_swap of elements
{
	struct Node* temp=head;
	
	while(temp!=NULL&&temp->next!=NULL)
	{
		swap(&temp->data,&temp->next->data);
		
		temp=temp->next->next;
	}
}

*/




int printmiddle(struct Node* head)                          //Print middle of linked list
{
	struct Node* first_ptr=head;
	struct Node* second_ptr=head;
		
	
		while(second_ptr!=NULL&&second_ptr->next!=NULL)
		{
			second_ptr=second_ptr->next->next;
			first_ptr=first_ptr->next;
			
		}
		printf("Middle=%d\n",first_ptr->data);

	
}
	





int listCount(struct Node* head)                            //count nodes of linked list
{
	int cnt=0;
	struct Node* temp=head;
	while(temp!=NULL)
	{
		
		temp=temp->next;
		cnt++;
	}
	return cnt;
}




struct Node* sort_list(struct Node* head)                   //program to sort a linked list
{
	struct Node* i,*j,*start;
	start=head;
	int temp;
	
	for(i=start;i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data > j->data)
			{
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
}





struct Node* concatenate_list(struct Node* head,struct Node* head2)               //concatenate two linked lists
{
	struct Node* p=head;
	struct Node* q=head2;
	
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=q;
	return head;
}
	



void print_Nth_from_last(struct Node* head,int n)               //print Nth node from last
{
	struct Node* temp=head;
	int len=0,i;
	while(temp!=NULL)
	{
		temp=temp->next;
		len++;
	}
	if(len<n)
	  return;

	temp=head;
	for(i=1;i<len-n+1;i++)
	{
		temp=temp->next;
	}
	printf("Nth_from_last= %d\n",temp->data);
}




int identical(struct Node* head,struct Node* head2)           //check two lists are identical or not
{
	
	while(head!=NULL && head2!=NULL)
	{
		if(head->data!=head2->data)
			return -1;
		head=head->next;
		head2=head2->next;
		
	}
	
}


void display(struct Node* head)                              //display linked list
{
	struct Node* temp;
	temp=head;
	while(temp!=NULL)
	{	
		//printf("%d\t",(*temp).data);
		printf("%d\t",temp->data);
		temp=temp->next;
		
	}
	printf("\n");
}



		


int main()
{
	struct Node* head=NULL;
	struct Node* head2=NULL;
	struct Node* intersection;
	//head=push(head,12);
	//head=push(head,11);
	//head=push(head,10);	
	//head=push(head,9);	
	head=push(head,90);
	head=push(head,70);	
	
	head=push(head,30);
	head=push(head,50);

	
	head2=push(head2,60);	
	head2=push(head2,40);
	head2=push(head2,20);
	head2=push(head2,10);

	
	

	//int length=find_length(head);
	//printf("length= %d\n",length);

	/*	
	display(head);                             //merge two and sort
	display(head2);
	concatenate_list(head,head2);
	display(head);
	sort_list(head);
	printf("sorted list ->\n");
	display(head);
	*/
	
	print_Nth_from_last(head,4);

	/*int temp=identical(head,head2);	   //check identicals
	if(temp==-1)
	  printf("not identical\n");
	else
	  printf("identical\n");	
	*/
	
	//swap_groups(head,4);
	
	//head=push(head,12);
	//head=push(head,10);
	//insertAfter(head->next,10);
	//head=insertfirst(head,4);
	//head=insertfirst(head,3);
	//insertLast(head,20);
	//pairwise_swap(head);
	//display(head);
	//head->next->next=head;
	//detect_loop(head);
	//display(head);
	//remove_duplicates(head);
	//display(head);
	//head=check_palindrome(head);
	//printmiddle(head);
	//int cnt=listCount(head);
	//printf("\nTotal Nodes= %d\n",cnt);
	//int sum=sumofNodes(head);
	//printf("sum= %d\n",sum);
	//search(head,10);
	//Nth_node(head,1);
	//occurence_of_node(head,1);
	//head=deleteNode(head,10);
	//head=deleteFirst(head);
	//head=deleteLast(head);
	//head=deleteMiddle(head,20);
	//head=reverse(head);		
	//display(head);
	
	
}




/*
struct Node* deleteNode(struct Node* head,int key)
{
	struct Node *p,*q;
	q=head;
	p=head->next;
	if(q->data==key)                  //start node
	{
		p=head;
		free(q);
	}
	else
	{
		while(p->data!=key)
		{
			p=p->next;
			q=q->next;
		}
		if(p->next==NULL)         //last node
		{
			q->next=NULL;
			free(p);
		}
		else                      //middle node
		{
			q->next=p->next;
			free(p);	
		}
	}
	return head;
}
	
*/



/*
struct Node* pairwise_swap(struct Node* head)
{
	struct Node* p=head;
	struct Node* temp,*q,*new_start;
	
	p=head;
	new_start=p->next;
	
	while(1)
	{
		q=p->next;
		temp=q->next;
		q->next=p;
		
		if(temp==NULL || temp->next==NULL)
		{
			p->next=NULL;
			break;
		}
		p->next=q->next;
		p=temp;
	}
	return new_start;
}
*/	
