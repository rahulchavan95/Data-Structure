#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}


void selection_sort(int arr[],int n)
{
	int i,j,fixed;
	for(i=0;i<n-1;i++)
	{
		fixed=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[fixed]>arr[j])
			{
				fixed=j;
			}
		}
		swap(&arr[fixed],&arr[i]);
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
	int i,arr[20],n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	selection_sort(arr,n);
	printf("sorted array is\n");
	print_Array(arr,n);
}
