#include<stdio.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}


void bubble_sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	 for(j=0;j<n-1;j++)
	   if(arr[j]>arr[j+1])
	   {
		swap(&arr[j],&arr[j+1]);
	   }
}
/*
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
}*/ 

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
	int arr[20],i,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubble_sort(arr,n);
	printf("sorted array is\n");
	print_Array(arr,n);
}     
