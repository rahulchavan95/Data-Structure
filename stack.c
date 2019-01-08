#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define max_size 20

struct stack
{
	char* data;
	int top;
}s;

void init()
{
	s.top=-1;
	s.data=(char *)malloc(sizeof(char));
}

char push(int value)
{
	if(s.top==max_size)
		printf("can't push\n");
	
	else
		s.top++;
		s.data[s.top]=value;
	//printf("%d\n",s.top);
}

char pop()
{
	char r;
	if(s.top==-1)
		printf("can't pop\n");
	
	else
		r=s.data[s.top--];
	printf("%c ",r);
}

void display()
{
	if(s.top==-1)
		printf("can't display\n");
	
	else
		for(int i=0;i<=s.top;i++)
		{	
			
			printf("%c",s.data[i]);
		}	
	printf("\n");
}


void reverse()
{
	//printf("%d",s.top);
	while(s.top!=-1)
	{
		char a=pop();
		printf("%c ",a);
	}

	
}		

int main()
{

	init();
	char ch;
	int max;
	printf("enter size\n");
	scanf("%d",&max);
	for(int i=0;i<=max;i++)
	{
		scanf("%c[^\n ]",&ch);
		
		push(ch);
	}
	//pop();
	display(); //rahul mahadev chavan
	reverse();


}
