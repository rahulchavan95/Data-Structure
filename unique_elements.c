#include<stdio.h>

int main()
{
    int a[]={1,7,3,8,4,4,5,6,5,6,7,1};
    int len=sizeof(a)/sizeof(a[0]);
   
    int in[9]={0};
    int len2=sizeof(in)/sizeof(in[0]);
    printf("%d \n",len2);
    int i;

    for(i=0;i<len;i++)
    {
        in[a[i]+0]++;
        
    }
    for(i=0;i<len2;i++)
    {
        printf("%d",in[i]);
    }
    printf("\n");
    for(i=1;i<len2;i++)
    {
        if(in[i]==1)
            printf("%d = %d\n",i,in[i]);
    }
    printf("\n");
}