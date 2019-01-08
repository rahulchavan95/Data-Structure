#include<stdio.h>

int main()
{
    int arr[]={1,2,2,5,5,6};
    int i,j=0;
    int len=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<len;i++)
    {
        if(arr[i]!=arr[i+1]);
            arr[j]=arr[i];
            j++;
    }
    for(i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
}