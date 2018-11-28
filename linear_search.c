#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int linear_search(int arr[],int key,int n)
{
for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		 return i;
	}
}



int main()
{
	int i,n,arr[5],key;
	n=sizeof(arr)/sizeof(arr[0]);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{	
		scanf("%d",&arr[i]);
	}
	printf("enter element to search\n");
	scanf("%d",&key);
	/*printf("array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("key=%d\n",key);
	printf("size=%d\n",n);*/
	int index=linear_search(arr,key,n);
	printf("element found at %d index\n",index);	
}
