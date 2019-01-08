#include<stdio.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}


int sort_array(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] > arr[i])
                swap(&arr[j],&arr[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
       
    }
     printf("\n");
    printf("2nd Highest= %d ",arr[1]);
    printf("\n");
    printf("2nd Smallest= %d ",arr[n-2]);
    printf("\n");
}


int main()
{
    int arr[]={10,3,15,9,20};
    int i,j,temp;

    int n=sizeof(arr)/sizeof(arr[0]);

    sort_array(arr,n);
}