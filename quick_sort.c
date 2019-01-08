#include<stdio.h>

void swap(int *x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}


int partition(int arr[],int l, int h)
{
    int i,j;
    int pivot=arr[h];
    i=l-1;
    for(j=l;j<=h-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    
    swap(&arr[i+1],&arr[h]);
    //printf("%d %d \n",arr[i+1],arr[h]);
    printf("%d ",i+1);
    return i+1;
}

void quick_sort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);

        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}

int main()
{
    int arr[]={10,80,30,90,40,50,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;

    quick_sort(arr,0,n-1);
    printf("sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}