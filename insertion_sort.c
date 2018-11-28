#include<stdio.h>


void insertion_Sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}

void print_Array(int arr[],int n)                             
{
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
}	
	


int main()
{
	int i,n,arr[10];
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertion_Sort(arr,n);
	printf("sorted array is\n");
	print_Array(arr,n);
}

