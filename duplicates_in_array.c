#include<stdio.h>

int main()
{
    int arr[]={1,3,3,2,2,5,5,6};
    int i,j;
    int a[9]={0};
    int len=sizeof(arr)/sizeof(arr[0]);
    int len2=sizeof(a)/sizeof(a[0]);

    for(i=0;i<len;i++)
    {
        a[arr[i]+0]++;
    }

    for(i=0;i<len2;i++)
    {
        printf("%d",a[i]);
    }

    printf("\nrepeated elements\n");
    for(i=0;i<len;i++)
    {
        if(a[i]>1)
            printf("%d\n",i);
    }
}