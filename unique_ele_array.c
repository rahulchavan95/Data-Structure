#include<stdio.h>

int main()
{
    int arr[]={1,1,2,2,3,4,4,5,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,sum=0,max=0;
    for(i=0;i<len;i++)
    {
        if(max < arr[i])
            max=arr[i];
        sum=sum+arr[i];
        printf("%d ",arr[i]);
    }
    printf("\n");

    int a=max*(max+1);
    int Unique=a-sum;

    printf("Unique No= %d\n",Unique);


}
