#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


int binary_search(int arr[],int key,int s,int e)
{	
	
	if(s<=e){
	int mid=s+e-1/2;
	//printf("--mid=%d e=%d key=%d",mid,e,key);
	//printf("%d",mid);
	if(arr[mid]==key)
		return mid;
	if(arr[mid]>key)
		return binary_search(arr,key,s,mid-1);	 
	if(arr[mid]<key)	
		return binary_search(arr,key,mid+1,e);
	}
}



int main()
{
	int i,arr[20],key,n;
	//n=sizeof(arr)/sizeof(arr[0]);	
	printf("enter array size\n");
	scanf("%d",&n);	
	printf("enter sorted array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter element to search\n");
	scanf("%d",&key);
	
	int index=binary_search(arr,key,0,n-1);
	printf("%d element found at %d position\n",key,index);
	
}
