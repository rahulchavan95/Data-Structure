#include<stdio.h>
int main()
{
    int arr[]={1,2,7,3,8,6};
    int k=3,n=6;
    int i=0,j=0;
    int min=0,max=0;
    int temp=0;

    for(i=0;i<n;i++)
    {
        //printf("%d\n",min);
        for(j=temp;j<k-1;j++)
        {
            if(arr[j]< min)
            {
                min=arr[j];
            }
            
        }
        temp=j;
        
        if(max < min)
            max=min;
      
    }
     
    //printf("%d\n",min);
    printf("max=%d\n",max);
}